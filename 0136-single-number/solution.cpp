class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>freq;
        for(int i : nums)
            freq[i]++;
        for(auto pair:freq)
        {
            int key =pair.first;
            int val = pair.second;
            if(val==1)return key; 

        }return -1;
            
        
    }
};
