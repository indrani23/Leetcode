class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        if(n>m && m==0)
            nums1 = nums2;
        else
        {
            for(int i=m,j=0;i<m+n;i++)
            {
               if(nums1[i]==0)
               {
                   nums1[i] = nums2[j];
                   j++;
               }
            }
            sort(nums1.begin(),nums1.end());
        }
        
    }
};