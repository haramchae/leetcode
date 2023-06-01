class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> v;
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        set<int> s3(nums3.begin(), nums3.end());
        map<int, int> m;
        for(auto it: s1) m[it]++;
        for(auto it: s2) m[it]++;
        for(auto it: s3) m[it]++;
        for(auto it: m){
            if(it.second>=2) v.push_back(it.first);
        }
        return v;
    }
};
