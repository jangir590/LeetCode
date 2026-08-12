class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        func(0,s,path,res);
        return res;
        
    }

    void func(int idx , string s,vector<string>&path,vector<vector<string>>&res){
        if(idx==s.length()){
            res.push_back(path);
            return;

        }
        for(int i = idx ; i<s.length() ; i++){
            if(isPalindrom(s,idx,i)){
                path.push_back(s.substr(idx,i-idx+1));
                func(i+1,s,path,res);
                path.pop_back();

            }
        }
    }

    bool isPalindrom(string s,int st,int end){
        while(st<=end){
            if(s[st++]!=s[end--])return false;

        }
        return true;
    }
};