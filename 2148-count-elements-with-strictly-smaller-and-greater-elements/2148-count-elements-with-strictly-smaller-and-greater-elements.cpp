class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0]==nums[nums.size()-1]) return 0;
        int min = count(nums.begin(), nums.end(), nums[0]);
        int max = count(nums.begin(), nums.end(), nums[nums.size()-1]);
        
        return nums.size() - min - max;
    }
};