class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        int threshold = n/3;
        unordered_map<int,int>freq;
        for(int i : nums){
            freq[i]++;
        }
        for(auto&pair:freq)
        {
            if(pair.second>threshold)
            {
                result.push_back(pair.first);
            }
        }
        return result;


        
    }
};
