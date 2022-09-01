class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> ans;
        unordered_map<int,int> m;
        int a;
        for(int i=0;i<nums.size();i++)
        {
            a = target - nums[i];
            if(m.find(a)!=m.end())
            {
                ans.push_back(m[a]);
                ans.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        return ans;
    } 
};