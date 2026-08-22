class Solution {
public:
    bool checkDivisibility(int n) {

        int num = n;
        int sum =0;
        int product=1;
        while(num>0){
            int rem = num%10;
            sum+=rem;
            product*=rem;
            num/=10;
        }
        int sum1=sum+product;
        if(n%sum1==0) return true;
        return false;
        
    }
};