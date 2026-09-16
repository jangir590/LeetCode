class Solution {
public:
    int GCD(int a,int b){
        int ans=(b==0)?abs(a):GCD(b,a%b);
        return ans;
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0;
        int sumEven=0;
        int odd=1;
        int even=2;
        while(n>0){
            sumOdd+=odd;
            sumEven+=even;
            odd+=2;
            even+=2;
            n-=1;
        }
        return GCD(sumOdd,sumEven);
        
    }
};