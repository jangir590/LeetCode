class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        else if(nums[0]>nums[1])
            return 0;
        else if(nums[nums.size()-1]>nums[nums.size()-2])
            return nums.size()-1;
        int st = 0 , n =nums.size(), end = n-1;
        while(st<=end)
        {
            int mid = st + (end-st)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
            else if(nums[mid-1]>nums[mid]) end =mid;
            
            else st =mid;
            
        } 
        return -1;
    }
};
