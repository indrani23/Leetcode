class Solution {
public:
    int maxDistToClosest(vector<int>& seats) 
    {
        int a,b,ans=0,i,j,cnt=0,cnt1=0;
        for(int i=0;i<seats.size();i++)
        {
            if(seats[i]==0)
            {
                cnt++;
            }
            else
                break;
        }
        for(int i=seats.size()-1;i>=0;i--)
        {
            if(seats[i]==0)
            {
                cnt1++;
            }
            else
                break;
        }
        for(i=0;i<seats.size();)
        {
            if(seats[i]==1)
            {
                a=i;
                for(j=i+1;j<seats.size();j++)
                {
                    if(seats[j]==1)
                    {
                        b=j;
                        ans = max((b-a)/2,ans);
                        break;
                    }
                }
                i=j;
            }
            else
            {
                i++;
            }
        }
        if(ans == 0)
        {
            if(cnt>seats.size()-1-a)
                return cnt;
            else
               return seats.size()-1-a;
        }
        else
            return max(max(ans,cnt),cnt1);
    }
};