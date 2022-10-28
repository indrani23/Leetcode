//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int m = *max_element(arr, arr + N);
      vector<int> hash(m+1,0);
      for(int i=0;i<N;i++)
      {
          hash[arr[i]]++;
      }
      int cnt = 0;
      int ans = 0;
      for(int i=0;i<hash.size();i++)
      {
          if(hash[i]!=0)
          {
              cnt++;
          }
          else
          {
              ans = max(ans,cnt);
              cnt = 0;
          }
      }
      ans = max(ans,cnt);
      return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends