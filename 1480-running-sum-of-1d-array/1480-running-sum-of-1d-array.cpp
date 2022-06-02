class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
	    vector <int> B; //declaration of vector B of int data type
		B=nums;//
		//cout<<B[0]<<" ";
		for(int i=1;i<nums.size();i++)
		{
			B[i]=B[i-1]+nums[i];
		}
		return B;
    }
};

