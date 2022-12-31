class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        while(nums[start]>nums[end]){
            int mid = start + (end-start)/2;
            if(nums[mid]<nums[start]){
                start++;
                end = mid;
            }else{
                start = mid + 1;
            }
        }

        return nums[start];
    }
};
