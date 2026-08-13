class Solution {
public:
    long long mod = 1e9 + 7;

    long long power(long long base ,long long exp){
        long long result = 1;
        base%=mod;
        while(exp>0){
            if(exp%2){
                result=(result*base)%mod;
            }
        
            base=(base*base)%mod;
            exp/=2;

            
           
        }
        return result;
    }


    int countGoodNumbers(long long n) {
      long long even = (n+1)/2;
      long long odd = n/2;
      long long ans= (power(5,even)*power(4,odd))%mod;

      return(int)ans;



       
    }
};