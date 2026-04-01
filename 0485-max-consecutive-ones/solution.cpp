class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_consecutive_ones = 0 ;
        int n = nums.size();
        int count = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
        
            if(nums[i]==1){
                count+=1;
                
            }

            
            else{   
                
                count=0;
            }
            max_consecutive_ones = max(max_consecutive_ones , count);
            
            

            
        }return max_consecutive_ones;
        
    }
};
