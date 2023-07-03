class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int minIndex = 0, maxIndex = 0, n = nums.size();
        for(int i = 0; i<n; ++i){
            if(nums[i]==1) minIndex = i;
            if(nums[i]==n) maxIndex = i;
        }
        return minIndex + (n-maxIndex-1) - (minIndex>maxIndex);
    }
};
