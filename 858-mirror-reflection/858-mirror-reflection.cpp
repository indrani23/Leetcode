class Solution {
public:
    int mirrorReflection(int p, int q) 
    {
        int l=0,r=1,a=1;
        int b = q;
        while(q%p != 0)
        {
            q += b;
            a++;
            if(a%2 == 0)
                l++;
            else
                r++;
        }
        if(l>=r)
            return 2;
        else
        {
            if(q/p % 2 != 0)
                return 1;
            else return 0;
        }
    }
};