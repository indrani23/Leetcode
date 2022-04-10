class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int m = *max_element(nums.begin(),nums.end());
        unordered_map<int,int> um;
        for(auto it : nums)
            um[it]++;
        int n = nums.size();
        int a = n/3;
        vector<int> ans;
        for(auto it : um)
        {
            if(it.second>a)
                ans.push_back(it.first);
        }

        return ans;
    }
};