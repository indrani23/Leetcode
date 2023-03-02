//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int nums[], int n) {
        
        // code here
        
        if(n<=1){
            return 1;
        }
        if(nums[0] == 0)
        {
            return 0;
        }
        int maxR = nums[0];
        int steps = nums[0];
        //int jump = 1;
        for(int i=1;i<n;i++)
        {
            if(i == n-1)
            {
                return 1;
            }
            maxR = max(maxR, i + nums[i]);
            steps--;
            if(steps == 0)
            {
                //jump++;
                if(i >= maxR)
                {
                    return 0;
                }
                steps = maxR - i;
            }
            
        }
        return 0;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends