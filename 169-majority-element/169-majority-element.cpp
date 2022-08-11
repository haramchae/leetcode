class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> um;
        priority_queue<pair<int, int>> pq;
        int ans = 0;
        for(auto it:nums){
            um[it]++;
        }
        for(auto it:um){
            pq.push(pair(it.second, it.first));
        }
        ans = pq.top().second;
        return ans;
    }
};