class Solution {
public:
    int smallestNumber(int n, int t) {
        
        while(true){
            int remainder;
            int num = n;
            int a =1;
            while(num>0){
            remainder=num%10;
            a*=remainder;
            num/=10;
            }
            if(a%t==0) return n;
            else n++;
        }
        return 0;
         
    }
};
