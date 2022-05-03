class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        vector<int> vect;
        vect = nums;
        sort(nums.begin(),nums.end());
        int m=0,n=0,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(vect[i]!=nums[i])
            {
                m = i;
                break;
            }
        }
        for(int j=nums.size()-1;j>0;j--)
        {
            if(vect[j]!=nums[j])
            {
                n = j;
                break;
            }
        }
        if(n==0 && m==0)
            return 0;
        else
            return n+1-m;
    }
};