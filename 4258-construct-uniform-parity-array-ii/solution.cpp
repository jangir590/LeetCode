class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        for(int i = 0 ;i<nums1.size();i++){
            if(nums1[i]%2!=0){
                int minval=*min_element(nums1.begin(), nums1.end());
                if(minval % 2 == 1) return true;
                else return false;
            }
        }
        return true;

       
    }
};
