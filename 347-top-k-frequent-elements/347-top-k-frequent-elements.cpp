class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(auto it: nums){
            um[it]++;
        }
        for(auto it: um){
            pq.push(pair(it.second, it.first));
        }
        for(int i = 0; i<k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};