class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, ans = 0;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                start = mid + 1;
                ans = mid + 1;
            }else{
                end = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};