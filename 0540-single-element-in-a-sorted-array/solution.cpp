class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto&pair:freq){
            if(pair.second==1) return pair.first;
        }return -1 ;

        
    }
};
