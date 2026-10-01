class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        long long sum=0;
        vector<long long>ans;
        while(n>0){
            long long rem=n%10;
            if(rem>0){
                ans.push_back(rem);
                sum+=rem;
            }
            n/=10;
        }
        for(int i=ans.size()-1;i>=0;i--){
            x=(x*10)+ans[i];
        }
        return x*sum;

        

        
    }
};