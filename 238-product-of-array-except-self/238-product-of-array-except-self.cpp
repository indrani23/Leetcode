class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int  n = nums.size();
        vector<int> a(n);
        vector<int> b(n);
        a[0] = 1;
        b[0] = 1;
        for(int i=1;i<n;i++)
        {
            a[i] = a[i-1]*nums[i-1];
            b[i] = b[i-1]*nums[n-i];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i] = a[i]*b[n-1-i];
        }
        return ans;
    }
};