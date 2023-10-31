//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
    unordered_map<int,int> firstOccurence;
    int maxi = 0;
    for(int i=0;i<n;i++)
    {
        if(firstOccurence.find(arr[i])!=firstOccurence.end())
        {
            maxi = max(maxi, i - firstOccurence[arr[i]]);
        }
        else
        {
            firstOccurence[arr[i]] = i;
        }
        
    }
    return maxi;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends