class Solution {
public:
    int bitwiseComplement(int n) {
        if( n == 0)
            return 1;

        int a = 0;
        int temp=n;
        while(temp>0){
            a=((a<<1) | 1);
            temp>>=1;
        }
        return n^a;
   
    }
};
