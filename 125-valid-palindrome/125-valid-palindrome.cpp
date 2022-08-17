class Solution {
public:
    bool isPalindrome(string s) 
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0,j=s.size()-1;i<j;)
        {
            if(isalnum(s[i]) && isalnum(s[j]))
            {
                if(s[i]==s[j])
                    i++,j--;
                else
                    return false;
            }
            else if(isalnum(s[i]))
                j--;
            else
                i++;
        }
        return true;
    }
};