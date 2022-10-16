//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        int buy = 0,sell = 0,flag = 0;
        vector<vector<int>> ans;
        for(int i=1;i<n;i++)
        {
            if(A[i]>=A[i-1] && A[i]!=A[buy])
            {
                sell++;
                flag = 1;
            }
            else if(buy == sell)
            {
                buy = i;
                sell = i;
            }
            else
            {
                vector<int> vec;
                vec.push_back(buy);
                vec.push_back(sell);
                ans.push_back(vec);
                
                buy = i;
                sell = i;
            }
        }
        if(flag == 0)
        {
            return ans;
        }
        else if(buy!=n-1 && sell==n-1)
        {
            vector<int> temp;
            temp.push_back(buy);
            temp.push_back(sell);
            ans.push_back(temp);
            return ans;   
        }
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends