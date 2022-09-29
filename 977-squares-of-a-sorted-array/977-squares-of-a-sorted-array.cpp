class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int> ans(nums.size());
        int k=nums.size()-1;
        for(int i=0,j=nums.size()-1;k>=0;k--)
        {
            if(abs(nums[i])>abs(nums[j]))
            {
                ans[k] = abs(nums[i])*abs(nums[i++]);
            }
            else
            {
                ans[k] = abs(nums[j])*abs(nums[j--]);
            }
        }
    
        return ans;
    }
};