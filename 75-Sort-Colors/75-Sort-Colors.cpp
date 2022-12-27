class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0, mid = 0, right = nums.size()-1;
        while(mid<=right){
            if(nums[mid]==0){
                int temp = nums[mid];
                nums[mid] = nums[left];
                nums[left] = temp;
                mid++;
                left++;
            }else if(nums[mid]==2){
                int temp = nums[mid];
                nums[mid] = nums[right];
                nums[right] = temp;
                right--;

            }else{
                mid++;
            }
        }
    }
};
