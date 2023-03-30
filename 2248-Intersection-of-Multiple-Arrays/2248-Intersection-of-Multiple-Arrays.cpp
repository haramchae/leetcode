class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> m;
        vector<int> v;
        for(auto num: nums){
            for(auto it: num){
                m[it]++;
            }
        }
        for(auto it: m){
            if(it.second == nums.size()){
                v.push_back(it.first);
            }
        }
        return v;
    }
};
