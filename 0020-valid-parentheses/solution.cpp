class Solution {
public:
    bool isValid(string s) {
        int n =s.length();
        vector<char> v ;
        for(int i =0 ; i<n ; i++)
        {   
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                v.push_back(s[i]);
            }

            else{
                if(v.empty())return false;

                char a = v.back();
                v.pop_back();

                if((s[i]==')' && a!='(' ) || (s[i]=='}' && a!='{' ) || (s[i]==']' && a!='[' )){
                    return false;
                }
            }

        }
        return v.empty();
        
    }
};
