class Solution {
public:
    string removeKdigits(string num, int k) {
        int n =num.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && (st.top()-'0')>(num[i]-'0')){
                st.pop();
                k=k-1;
            }
            st.push(num[i]);
            
        }
        while(k>0){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string result ="";
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        int idx=0;
        while(idx<result.size() && result[idx]=='0'){
            idx++;
        }
        result = result.substr(idx);
        if(result.empty())return "0";
        return result;
        
    }
};