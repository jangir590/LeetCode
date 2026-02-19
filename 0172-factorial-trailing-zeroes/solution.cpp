class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;

        for ( int i = 1;i<=n;i++){
            int num = i;
            while(num%5==0){
                count +=1;
                num=num/5;
            }
        }return count ;

                
    }
};
