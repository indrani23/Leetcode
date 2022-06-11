class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0; // to store the maxs length of tyhe substring
        int j=0; // to store the start of the required substring
        map <char , int> mp; // to store the char and their indices
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])!=mp.end()){ // if the element is repeating , it means it will be present in the map
                if(j<mp.find(s[i])->second+1) // take the larger index for future calculation
                    j=mp.find(s[i])->second+1; // update the j
                
            }
            mp[s[i]]=i; // mark the elements and their index in the map
            len=max(len,i-j+1); // update the length
        }
        return len; // pro coder poty
    }
    
};


   