class Solution {
public:
    int reverse(int x) 
    {
        long long ans = 0;
        while(x!=0)
        {
            int r = x%10;
            x = x/10;
            ans = ans*10+r;
        }
        if(ans<INT_MIN || ans>INT_MAX)
            return 0;
        else return ans;
    }
};