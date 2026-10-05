class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "C") {
                st.pop();
            }
            else if(operations[i] == "D") {
                int x = st.top();
                st.push(2 * x);
            }
            else if(operations[i] == "+") {
                int last = st.top();
                st.pop();
                int seclast = st.top();
                st.push(last);
                st.push(last + seclast);
            }
            else {
                st.push(stoi(operations[i]));
            }
        }
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};