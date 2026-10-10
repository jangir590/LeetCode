class Solution {
public:

    vector<int>find_NSE(vector<int>&arr){
        int n =arr.size();
        vector<int>nse(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            nse[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return nse;

    }
    vector<int>find_PSEE(vector<int>&arr){
        int n =arr.size();
        vector<int>psee(n);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            psee[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return psee;

    }
    

    int sumSubarrayMins(vector<int>& arr) {
        
        int n=arr.size();
        vector<int>nse=find_NSE(arr);
        vector<int>psee=find_PSEE(arr);
        long long total =0;
        int mod=1e9 + 7;
        for(int i=0;i<n;i++){
            long long left = i - psee[i];
            long long right = nse[i]-i;
            long long count = (right*left)%mod;
            total=(total + (count*arr[i])%mod)%mod;

        }
        return total;

        
    }
};