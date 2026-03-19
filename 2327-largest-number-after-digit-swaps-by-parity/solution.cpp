class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        for(int i = 0 ; i<s.size(); i++){
            for(int j = i+1 ; j<s.size() ; j++){
                int a = s[i] - '0';
                int b = s[j] - '0';
                if((s[i]-'0')%2 == (s[j]-'0')%2 && b>a){
                    swap(s[i],s[j]);
                }
            }
        }
        return stoi(s);

        
    }
};
