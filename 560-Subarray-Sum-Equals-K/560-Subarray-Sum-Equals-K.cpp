class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int totalSum = 0, count = 0;
        unordered_map<int, int> um;
        um[0]++;
        for(auto num: nums){
            totalSum += num;
            count += um[totalSum-k];
            um[totalSum]++;
        }
        return count;
    }
};
