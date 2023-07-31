//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        unordered_map<char,int> umap;
        for(int i=0;i<A.length();i++)
        {
            umap[A[i]]++;
        }
        for(int i=0;i<B.length();i++)
        {
            umap[B[i]]--;
        }
        for(auto i : umap)
        {
            if(i.second != 0) return -1;
        }
        int i = A.length();
        int j = B.length();
        int ans = 0;
        while(i>=0 && j>=0)
        {
            if(A[i] == B[j])
            {
                i--;
                j--;
            }
            else
            {
                ans++;
                i--;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends