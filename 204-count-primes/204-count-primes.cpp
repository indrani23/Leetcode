class Solution {
public:
    int countPrimes(int n) 
    {
        vector<bool> v(n+1,true);
        int count = 0;
        v[0] = 0;
        v[1] = 0;
        for(int i=2;i<n;i++)
        {
            if(v[i])
            {
                count++;
                for(int j=2*i;j<n;j=j+i)
                {
                    v[j] = 0;
                }
            }
        }
        return count;
    }
};