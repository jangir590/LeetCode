class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left_sum = 0;
        int right_sum = 0;
        int total = 0;
        for(int i = 0 ; i<n ; i++){
            total +=nums[i];
        }
        for(int j = 0; j<n ; j++){
            right_sum = total - nums[j] - left_sum;
            if(left_sum==right_sum)return j;
            else{
                left_sum+=nums[j];
            }

        }return -1;
        
    }
};
