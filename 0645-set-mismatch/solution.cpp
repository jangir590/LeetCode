class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>arr;
        int n = nums.size();
        vector<int>freq(n+1,0);
        for(int i = 0 ; i<n ; i++ )
        {
            freq[nums[i]]++;
        }
        int duplicate = -1 ,missing = -1;
        for(int j = 1 ; j<=n ; j++)
        {
            if(freq[j]==2) duplicate = j;
            if(freq[j]==0) missing = j;

        }
        arr.push_back(duplicate);
        arr.push_back(missing);
        return arr;
        
    }
};
