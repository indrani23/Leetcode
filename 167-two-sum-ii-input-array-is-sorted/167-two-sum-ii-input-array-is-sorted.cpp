class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> ans;
        int sum;
        for(int i=0,j=numbers.size()-1;i<j;)
        {
            sum = numbers[i]+numbers[j];
            if(sum<target)
                i++;
            else if(sum>target)
                j--;
            else
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
        }
        return ans;
    }
};