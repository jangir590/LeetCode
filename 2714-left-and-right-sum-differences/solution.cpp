class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> RightSum;
        vector<int> answer;
        int n = nums.size();
       


        for(int i = n-1 ; i>=0 ; i--)
        {
            int s1 = 0 ;

            for( int j = i-1 ; j>=0 ; j--)
            {
                s1+=nums[j];
            }
            leftSum.push_back(s1);
        }
        reverse(leftSum.begin(), leftSum.end());


        
        for(int i = 0 ; i<n ; i++)
        {   
            int s2 = 0;
            for(int j = i+1 ; j<n ; j++)
            {
                s2+=nums[j];
            }
            RightSum.push_back(s2);

        }

        for(int i = 0 ; i<n ; i++)
        {
            if(leftSum[i]>RightSum[i]){
                answer.push_back(leftSum[i]-RightSum[i]);
            }
            else{
                answer.push_back(RightSum[i]-leftSum[i]);
            }
        }
        return answer;

        
        
    }
};
