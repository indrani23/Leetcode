class Solution {
public:
    int reverse(int x) 
    {
        // int a = x;
        // if(x<0)
        // {
        //     x = -1 * x;
        // }
        long long ans = 0;
        while(x!=0)
        {
            int r = x%10;
            x = x/10;
            ans = ans*10+r;
        }
        // if(a<0)
        //     return -ans;
        // else
        //     return ans;
        if(ans<INT_MIN || ans>INT_MAX)
            return 0;
        else return ans;
    }
};