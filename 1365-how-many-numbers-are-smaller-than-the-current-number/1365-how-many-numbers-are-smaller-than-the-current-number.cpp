class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> vect = nums;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> m;
        int count = 0;
        int same = 0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                m[nums[i]] = count;
                count += same+1;
                same = 0;
            }
            else
            {
                same++;
            }
        }
        m[nums[nums.size()-1]] = count;
        vector<int> ans;
        for(int i=0;i<vect.size();i++)
        {
            ans.push_back(m[vect[i]]);
        }
        return ans;
    }
};