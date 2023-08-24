class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> um;
        for(auto num: nums){
            um[num]++;
        }
        for(auto it: um){
            if(it.second%2 == 1) return false;
        }
        return true;
    }
};
