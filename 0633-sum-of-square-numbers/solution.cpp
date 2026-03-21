class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int a = 0 ; a<=sqrt(c) ; a++){
            int num = c - a*a ;
            int b = sqrt(num);
             if (num == b*b){
                return true;
             }
        }return false;

    }
};
