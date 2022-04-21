class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int ans = 0;
        int m = *max_element(nums.begin(),nums.end());
        vector<int> hash(m+1,0);
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(int i=0;i<m+1;i++)
        {
            ans += hash[i]*(hash[i]-1)/2;
        }
        return ans;
    }
};