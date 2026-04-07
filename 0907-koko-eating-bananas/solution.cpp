class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1 , hi = *max_element(piles.begin(),piles.end());
        while(lo<=hi)
        {   if(lo==hi) return lo;
            int total_hr = 0 ;
            int mid = lo + (hi - lo)/2;
            for( int i = 0 ; i<piles.size() ; i++ )
            {
                total_hr +=( piles[i] + mid - 1)/mid;

            }
            if(total_hr<=h)
                hi = mid;
            else
                lo = mid+1;
        }
        return -1 ;
        
    }
};
