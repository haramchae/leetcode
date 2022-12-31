class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> mp;
        for(auto A: nums1){
            for(auto B: nums2){
                mp[A+B]++;
            }
        }
        int ans = 0;
        for(auto C: nums3){
            for(auto D:nums4){
                ans += mp[-C-D];
            }
        }
        return ans;
    }
};
