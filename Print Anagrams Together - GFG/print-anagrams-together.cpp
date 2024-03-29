//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<string> vec;
        vec = string_list;
        int n = string_list.size();
        unordered_map<string, list<int>> umap;
        for(int i=0;i<n;i++)
        {
            sort(string_list[i].begin(),string_list[i].end());
            umap[string_list[i]].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto &i : umap)
        {
            vector<string> v;
            for(auto &j : i.second)
            {
                v.push_back(vec[j]);
            }
            ans.push_back(v);
        }
        sort(ans.begin(),ans.end());
        return ans;
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
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends