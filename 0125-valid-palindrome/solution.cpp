class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ") return true;
        string result = "";
        for (char c : s)
        {
            if(isalnum(c)){
                result+=tolower(c);
            }
        }
        string reverse = result;
        int n = result.length();

        for(int i = 0 ; i<n/2 ; i++){
            swap(result[i],result[n-1-i]);
        }
        if(result==reverse) return true;
        
        return false;

        
    }
};
