class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for(int i = 0; i<score.size(); ++i){
            pq.push(make_pair(score[i], i));
        }
        int count = 0;
        vector<string> ans(pq.size());
        while(!pq.empty()){
            ans[pq.top().second] = count == 0 ? "Gold Medal" : count == 1 ? "Silver Medal" : count == 2 ? "Bronze Medal" : to_string(count+1);
            count++;
            pq.pop();
        }
        return ans;
    }
};
