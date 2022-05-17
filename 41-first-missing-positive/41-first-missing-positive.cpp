class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int check = 1;
        int j=-1,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                j=i;
                break;
            }
        }
        if(j==-1)
            return 1;
        else
        {
            for(int i=j;i<nums.size();i++)
            {
                if(nums[i] == check)
                {
                    if(i!=nums.size()-1 && nums[i+1] != nums[i])
                    {
                        check++;
                        ans = check;
                    }
                    else if(i==nums.size()-1)
                    {
                        check++;
                        ans = check;
                    }
                }
                else
                {
                    ans = check;
                    break;
                }
            }
            return ans;
        }
        
    }
};