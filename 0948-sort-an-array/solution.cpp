class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int>freqmap;
        vector<int>sortedarr;
        for(int i:nums){
            freqmap[i]++;
        }
        for(auto pair:freqmap)
        {
            int key = pair.first;
            int count = pair.second;

            for(int j = 0 ; j<count ; j++){
                sortedarr.push_back(key);
            }

        }
        return sortedarr;

    }
};
