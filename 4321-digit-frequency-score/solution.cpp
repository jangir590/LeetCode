class Solution {
public:
    int digitFrequencyScore(int n) {
        if(n==0) return 0;
        int score = 0 ;
        while(n>0)
        {
            score+=n%10;
            n=n/10;
        }
        return score;
        
    }
};
