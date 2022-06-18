class Solution {
public:
    int maxTwoNoOverlap(vector<int>& nums,int firstLen,int secondLen,int n,int res=0) 
    {
         
        vector<int> left(n+1), right(n+1);
        for(int i=0,j=n-1,sl=0,sr=0;i<n;i++,j--)
        {
            sl+=nums[i];
            sr+=nums[j];
            left[i+1] = max(left[i],sl);
            right[j] = max(right[j+1],sr);
            if(i+1>=firstLen) sl-=nums[i+1-firstLen];
            if(i+1>=secondLen) sr-=nums[j+secondLen-1];
        }
        for(int i=0;i<n;i++)
        {
            res = max(res,left[i]+right[i]);
        }
        return res;
    }
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen)
    {
        return max(maxTwoNoOverlap(nums,firstLen,secondLen,nums.size()),maxTwoNoOverlap(nums,secondLen,firstLen,nums.size()));
        }
};