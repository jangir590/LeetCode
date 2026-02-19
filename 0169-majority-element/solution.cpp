class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count_01 = 0;
        int num = nums[0];

        for(int i=0 ;i<n;i++)
        {
            if(nums[i]==num){
                count_01 +=1;
                 if(count_01>(n/2)){
                    return num ;
                }
            }

            else{
                num = nums[i];
                count_01=1;
            }
        }
        return -1 ;    
    }
};
