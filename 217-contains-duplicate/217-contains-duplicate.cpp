class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int prev = nums.size();
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(),nums.end()), nums.end());
        int curr = nums.size();
        if(prev!=curr){
            return true;
        }
        return false;

    }
};