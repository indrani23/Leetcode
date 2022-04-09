/*
here we are storing the pair of frequency of each element into a map. We then sort the pairs according to their frequencies and then return the k most appearing elements. 

We are using min heap here beacuse it easily sorts the pair. We have a min heap of size k because we only need the k most appearing elements. if the min heap size becomes greater than that, it automatially keeps the larger pair and pops the smaller one.
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // min heap of pairs
        unordered_map<int, int> mp; // frequency map
        for (auto it : nums) 
            mp[it]++;
        for (auto it : mp) { 
            pq.push({it.second, it.first});  // push into heap by inserting the frequency as first part of pair
            while (pq.size() > k) 
                pq.pop(); // if min heap becomes full, pop
        }
        vector <int> res;  // to be returned
        while(k--){ // traverse the min heap
            res.push_back(pq.top().second); // psuh the value at the top of min heap into res 
            pq.pop(); // pop the value
        }
        return res; // return
    }    
};