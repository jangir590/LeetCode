class Solution {
private:
    int priority(char op) {
        if (op == '+' || op == '-') return 1;
        if (op == '*' || op == '/') return 2;
        return 0;   
    }

public:
    string InfixtoPostfix(string s) {
        int n = s.length();
        int i = 0;
        stack<char> st;
        string ans = "";

        while (i < n) {
            if (s[i] == ' ') {
                i++;
                continue;
            }

            if (isdigit(s[i]) || isalpha(s[i])) {
                while (i < n && (isdigit(s[i]) || isalpha(s[i]))) {
                    ans += s[i];
                    i++;
                }
                ans += " ";
                continue; 
            }
            else if (s[i] == '(') {
                st.push(s[i]);
            }
            else if (s[i] == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    ans += " ";
                    st.pop();
                }
                if (!st.empty()) st.pop();
            }
            else {
                while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                    ans += st.top();
                    ans += " ";
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }
        while (!st.empty()) {
            ans += st.top();
            ans += " ";
            st.pop();
        }
        return ans;
    }
    int evaluatePostfix(string postfix) {
        stack<int> st;
        for (int i = 0; i < postfix.length(); i++) {
            if (postfix[i] == ' ') continue;
            if (isdigit(postfix[i])) {
                int num = 0;
                while (i < postfix.length() && isdigit(postfix[i])) {
                    num = num * 10 + (postfix[i] - '0');
                    i++;
                }
                i--;
                st.push(num);
            } 
            else {
                int val2 = st.top(); st.pop();
                int val1 = st.top(); st.pop();

                switch (postfix[i]) {
                    case '+': st.push(val1 + val2); break;
                    case '-': st.push(val1 - val2); break;
                    case '*': st.push(val1 * val2); break;
                    case '/': st.push(val1 / val2); break;
                }
            }
        }
        return st.top();
    }
    int calculate(string s) {
        string postfix = InfixtoPostfix(s);
        return evaluatePostfix(postfix);
    }
};