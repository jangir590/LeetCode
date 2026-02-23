class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> s;
        for(int i = 0 ; i<nums.size() ; i++){
           
            s.push_back(nums[i]*nums[i]);
        }
        sort(s.begin(),s.end());
        return s;
        
        
    }
};
