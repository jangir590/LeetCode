class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int>answer;
        int n = nums.size();
        int countE = 0 ,countO = 0 ;

        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==1) countO++;
            else countE++;
        }

        for(int j=0;j<n;j++)
        {
            if(nums[j]%2==1){
                answer.push_back(countE);
                countO--;
            }
            else{
                answer.push_back(countO);
                countE--;
            }
        }return answer;
    
            
    }
};
