class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int ans = -1, ptr1 = 0, ptr2 = 0, n1 = nums1.size(), n2 = nums2.size();
        while(ptr1<n1 && ptr2<n2){
            if(nums1[ptr1]==nums2[ptr2]){
                ans = nums1[ptr1];
                break;
            }else if(nums1[ptr1]<nums2[ptr2]){
                ++ptr1;
            }else{
                ++ptr2;
            }
        }
        return ans;
    }
};
