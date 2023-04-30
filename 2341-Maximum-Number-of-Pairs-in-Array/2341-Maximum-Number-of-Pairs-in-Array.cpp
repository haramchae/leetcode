class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int pair = 0, left = 0;
        vector<int> v;  
        map<int, int> m;
        for(auto num: nums){
            m[num]++;
        }
        for(auto it: m){
            pair += it.second/2;
            left += it.second%2;
        }
        v.push_back(pair);
        v.push_back(left);
        return v;
    }
};
