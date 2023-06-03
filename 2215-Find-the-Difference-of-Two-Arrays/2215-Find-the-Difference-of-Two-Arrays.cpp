class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us1(nums1.begin(), nums1.end());
        unordered_set<int> us2(nums2.begin(), nums2.end());
        vector<int> v1;
        vector<int> v2;
        for(auto num: us1){
            if(!us2.count(num)) v1.push_back(num);
        }
        for(auto num: us2){
            if(!us1.count(num)) v2.push_back(num);
        }
        return {v1,v2};
    }
};
