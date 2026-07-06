class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s2 = 0 ;
        int sum = 0;
        int n = nums.size();


      

        for(int i = 1 ; i<=n; i++){
            sum += i;
        }
        for(int i = 0 ; i<nums.size() ; i++ )
        {
            s2+=nums[i];
        }
        return sum - s2;

        
    }
};
