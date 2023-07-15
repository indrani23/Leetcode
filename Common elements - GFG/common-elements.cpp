//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            unordered_map<int,char> umap;
            for(int i=0;i<n1;i++)
            {
                umap[A[i]] = 'a';
            }
            for(int i=0;i<n2;i++)
            {
                if(umap.find(B[i]) != umap.end())
                {
                    umap[B[i]] = 'b';
                }
            }
            for(int i=0;i<n3;i++)
            {
                if(umap.find(C[i]) != umap.end() && umap[C[i]] == 'b')
                {
                    umap[C[i]] = 'c';
                }
            }
            for(auto &x : umap)
            {
                if(x.second == 'c')
                {
                    ans.push_back(x.first);
                }
            }
            sort(ans.begin(),ans.end());
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends