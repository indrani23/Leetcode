class Solution {
public:
    int getLucky(string s, int k) 
    {
        string ans = "";
        for(int i=0;i<s.size();i++)
        {
            ans += to_string(int(s[i])-96);
        }
        int sum = 0;
        while(k--)
        {
            for(int i=0;i<ans.size();i++)
            {
                sum += int(ans[i]-'0');
            }
            ans = to_string(sum);
            sum = 0;
        }
        return stoi(ans);
    }
};