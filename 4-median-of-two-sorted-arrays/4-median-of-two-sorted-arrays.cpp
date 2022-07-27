class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.reserve(nums1.size() + nums2.size());
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int size = nums1.size();
        double ans = 0.00;
        if(size%2 == 1){
            ans = double(nums1[size/2]);
        }else if(size%2 == 0){
            ans = (double(nums1[size/2 - 1]) + nums1[size/2]) / 2;
        }
        
        return ans;
    }
};