//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                neg.push_back(arr[i]);
            }
            else
            {
                pos.push_back(arr[i]);
            }
        }
        for(int i=0;i<pos.size();i++)
        {
            arr[i] = pos[i];
        }
        int j = 0;
        for(int i=pos.size();i<n;i++)
        {
            
            arr[i] = neg[j];
            j++;
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends