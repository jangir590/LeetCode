class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        vector<int> f;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0){
                p.push_back(nums[i]);
            }

            else{
                n.push_back(nums[i]);
            }
            
        }

        for(int j =0 ; j<p.size() ; j++)
        {
                f.push_back(p[j]);
                f.push_back(n[j]);
        }
        return f;
        
    }
    
};
