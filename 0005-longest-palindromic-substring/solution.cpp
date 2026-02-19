class Solution {
public:
    int maxPald_Odd(string s, int mid)
    {
        int count = 1;
        while(mid-count>=0 && mid+count<s.size())
        {
            if(s[mid-count]!=s[mid+count])
                return count;
            else
                count++;
        }
        return count;
    }

    int maxPald_Even(string s, int mid)
    {
        int count = 0;
        while(mid-count>=0 && mid+count+1<s.size())
        {
            if(s[mid-count]!=s[mid+count+1])
                return count;
            else
                count++;
        }
        return count;
    }
    string longestPalindrome(string s) {
        int max_count = 0;
        int mid = 0;
        bool Odd = false;
        bool Even = false;
        for(int i=0 ; i<s.size() ; i++)
        {
            int maxPald_Odd_val = maxPald_Odd(s,i);
            if(maxPald_Odd_val > max_count)
            {
                Odd = true;
                Even = false;
                mid = i;
                max_count = maxPald_Odd_val;
            }

            int maxPald_Even_val = maxPald_Even(s,i);
            if(maxPald_Even_val >= max_count)
            {
                Even = true;
                Odd = false;
                mid = i;
                max_count = maxPald_Even_val;
            }
        }
        if(Odd)
            return s.substr(mid-max_count+1,(2*max_count)-1);
        if(Even)
            return s.substr(mid-max_count+1,2*max_count);
        else
            return "";
    }
};
