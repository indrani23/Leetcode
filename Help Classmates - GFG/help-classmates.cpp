//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int> v;
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
            {
                v.push_back(-1);
                s.push(arr[i]);
            }
            else
            {
                while(1)
                {
                    if(s.empty())
                    {
                        v.push_back(-1);
                        break;
                    }
                    if(s.top()<arr[i])
                    {
                        v.push_back(s.top());
                        break;
                    }
                    else
                    {
                        s.pop();
                    }
                }
                s.push(arr[i]);
            }
        }
        reverse(v.begin(),v.end());
        return v;
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends