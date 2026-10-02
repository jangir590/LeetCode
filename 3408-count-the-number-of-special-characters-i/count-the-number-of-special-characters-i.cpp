class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<int>s(word.begin(),word.end());
        int res=0;
        for(auto c:s){
            if(s.count(c+32)&&s.count(c)){
                res++;
            }
        }
        return res;
        
    }
};