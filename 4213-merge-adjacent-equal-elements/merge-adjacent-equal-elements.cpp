class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        int n = nums.size();
        stack<long long>st;
        vector<long long>ans;
        for(int i=0;i<n;i++){
            long long  x = nums[i];
            while(!st.empty() && st.top()==x){
                x+=st.top();
                st.pop();
            }
            st.push(x);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};