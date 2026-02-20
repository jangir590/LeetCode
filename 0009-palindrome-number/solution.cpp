class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.length();
        int st = 0 ;
        int end =n-1;
        if(x<0){
            return false;
        }
        while(st<=end){
            if(s[st]!=s[end]){
                return false;
            }

            else{
                st++;
                end--;
            }
        } return true;
           
            
        


        
    }
};
