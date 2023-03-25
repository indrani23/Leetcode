//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        // nearest smaller to left
        vector<int> nsl;
        stack<pair<long long,int>> s1;
        for(int i=0;i<n;i++)
        {
            while(1)
            {
                if(s1.empty())
                {
                    nsl.push_back(-1);
                    break;
                }
                if(s1.top().first<arr[i])
                {
                    nsl.push_back(s1.top().second);
                    break;
                }
                else
                {
                    s1.pop();
                }
            }
            s1.push({arr[i],i});
        }
        // nearest smaller to right
        vector<int> nsr;
        stack<pair<long long,int>> s2;
        for(int i=n-1;i>=0;i--)
        {
            while(1)
            {
                if(s2.empty())
                {
                    nsr.push_back(n);
                    break;
                }
                if(s2.top().first<arr[i])
                {
                    nsr.push_back(s2.top().second);
                    break;
                }
                else
                {
                    s2.pop();
                }
            }
            s2.push({arr[i],i});
        }
        reverse(nsr.begin(),nsr.end());
        // width
        long long ans = -1;
        long long pro;
        for(int i=0;i<n;i++)
        {
            pro = arr[i] * (nsr[i]-nsl[i]-1);
            ans = max(pro,ans);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends