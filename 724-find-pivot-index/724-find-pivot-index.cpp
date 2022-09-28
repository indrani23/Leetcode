class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n+1);
        vector<int> suf(n+1);
        pre[0] = 0;
        suf[n] = 0;
        for(int i=1;i<=n;i++)
        {
            pre[i] = pre[i-1]+nums[i-1];
        }
        for(int i=n-1;i>=0;i--)
        {
            suf[i] = suf[i+1]+nums[i];
        }
        int ans = -1;
        for(int i=0,j=1;j<=n;i++,j++)
        {
            if(pre[i]==suf[j])
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};