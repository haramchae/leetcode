class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue<pair<int, string>> pq;
        for(int i = 0; i<names.size(); ++i){
            pq.push(make_pair(heights[i], names[i]));
        }
        vector<string> v;
        while(!pq.empty()){
            pair temp = pq.top();
            pq.pop();
            v.push_back(temp.second);
        }
        return v;
    }
};
