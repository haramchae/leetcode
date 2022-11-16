class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        multimap<int, int> m;
        for(auto it: arr){
            m.insert(make_pair(abs(it-x), it));
        }
        int i = 0;
        for(auto item = m.begin(); item != m.end() && i<k; item++, i++){
            ans.push_back(item->second);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
