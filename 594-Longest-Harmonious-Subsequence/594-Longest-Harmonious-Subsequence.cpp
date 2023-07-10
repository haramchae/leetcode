class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int num: nums){
            m[num]++;
        }
        int ans = 0;
        for(auto it: m){
            if(m.find(it.first+1)!=m.end()){
                ans = max(ans, it.second+m[it.first+1]);
            }
        }
        return ans;
    }
};
