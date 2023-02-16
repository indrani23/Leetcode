//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int findTargetSumWays(vector<int>&nums ,int target) {
        //Your code here
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
        }
        if(target > sum || target < (-sum))
        {
            return 0;
        }
        int s1 = (target + sum)/2;
        int s2 = s1 - target;
        if (s1 + s2 < sum) return 0;
        int t[n+1][s1+1];
        t[0][0] = 1;
        for(int i=1;i<s1+1;i++)
        {
            t[0][i] = 0;
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<s1+1;j++)
            {
                if(nums[i-1]<=j)
                {
                    t[i][j] = t[i-1][j-nums[i-1]] + t[i-1][j];
                }
                else
                {
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[n][s1];
        

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends