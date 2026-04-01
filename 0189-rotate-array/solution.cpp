class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        reverse(nums.begin(),nums.end());
        int n = nums.size();

        if(k<n){
            int st1 = 0 , end1 = k-1;
        while(st1<=end1)
        {
            swap(nums[st1],nums[end1]);
            st1++;
            end1--;
        }
        int st2 = k , end2 = n-1;
        while(st2<=end2)
        {
            swap(nums[st2],nums[end2]);
            st2++;
            end2--;
        }

        }

        else{
            int K = k%n;
            int st1 = 0 , end1 = K-1;
        while(st1<=end1)
        {
            swap(nums[st1],nums[end1]);
            st1++;
            end1--;
        }
        int st2 = K , end2 = n-1;
        while(st2<=end2)
        {
            swap(nums[st2],nums[end2]);
            st2++;
            end2--;
        }

        }
        
    }
};
