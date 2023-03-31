class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> v(arr);
        sort(v.begin(), v.end());
        unordered_map<int, int> um;
        for(int n: v){
            um.emplace(n, um.size()+1);
        }
        for(int i = 0; i < v.size(); ++i){
            v[i] = um[arr[i]];
        }
        return v;
    }
};
