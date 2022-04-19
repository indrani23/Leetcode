class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int m = *max_element(nums.begin(),nums.end());
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==m)
                ans = i;
            else if(m<2*nums[i])
            {
                ans = -1;
                break;
            }
            
        }
        return ans;
    }
};