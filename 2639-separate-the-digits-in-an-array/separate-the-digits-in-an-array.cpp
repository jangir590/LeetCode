class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            stack<int>st;
            while(nums[i]>0){
                int rem=nums[i]%10;
                st.push(rem);
                nums[i]/=10;
            }
            while(!st.empty()){
                temp.push_back(st.top());
                st.pop();
            }

        }
        return temp;    
    }
};