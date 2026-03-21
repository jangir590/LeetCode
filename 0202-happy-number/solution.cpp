class Solution {
public:
    bool isHappy(int n) {
        if (n<=0) return false;
        int sum =0;
        while(sum!=1 && sum!=89){
            while(n>0)
            {
                int a = n%10;
                sum += a*a ;
                n/=10 ;
            }
            n = sum ;
            sum = 0;
            if(n==1)return true;
            else if(n==89)return false;
        }
        return false;
    }
};
