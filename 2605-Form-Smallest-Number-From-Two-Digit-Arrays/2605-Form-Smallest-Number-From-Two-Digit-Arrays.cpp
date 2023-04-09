class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        int first = INT_MAX, second = INT_MAX;
        for(auto num: nums1){
            mp[num]++;
            first = min(first, num);
        }
        for(auto num: nums2){
            mp[num]++;
            second = min(second, num);
        }
        for(auto it: mp){
            if(it.second == 2) return it.first;
        }
        int ans = min(first*10 + second, second*10 + first);
        return ans;
    }
};
