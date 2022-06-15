class Solution {
public:
    
    int removePalindromeSub(string s) {
        // return 2 - (s == string(s.rbegin(), s.rend())) - s.empty();
        
        if(s == "")
            return 0;
        for(int i=0,j=s.size()-1;i<j;i++,j--)
        {
            if(s[i]!=s[j])
                return 2;
        }
        return 1;
        
    }
};