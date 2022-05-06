class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack <pair<char, int>> st;
        int n= s.size();
        if(n<k)
            return s;
        for(int i=0;i<n;i++){
            if(st.empty() || st.top().first!=s[i]){
                st.push({s[i],1});
            }
            else{
                // auto it=st.top();
                // st.pop();
                // st.push({s[i],it.second+1});
                st.top().second++;
            }
            if(st.top().second==k){
                st.pop();
            }
        }
        string ans;
        for(int i=0;!st.empty();i++){
            auto it= st.top();
            st.pop();
            while(it.second--){
                ans+=it.first;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};