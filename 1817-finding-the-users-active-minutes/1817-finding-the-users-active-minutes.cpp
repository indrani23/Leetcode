class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) 
    {
        vector<int> ans(k);
        unordered_map<int,unordered_set<int>> m;
        for(auto &l : logs)
            m[l[0]].insert(l[1]);
        for(auto &n : m)
            ans[n.second.size()-1]++;
        return ans;
    }
};