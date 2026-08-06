class Solution {
public:
    int mySqrt(int x) {
        long long count=0;
        for(long long i = 1; i*i<=x;i++){
            count++;

        }
        return count;
        
    }
};
