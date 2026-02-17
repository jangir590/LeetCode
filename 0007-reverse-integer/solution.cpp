class Solution {
public:
    long long int reverse(int x) {
        long long int ans=0;
        while(x!=0){
            int digit =x%10;
            ans=ans*10 +digit;
            x/=10;
        }
        if(ans>pow(2,31)-1 || ans<-1*pow(2,31))
            return 0;
        return ans;
    }
};
