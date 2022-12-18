class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int i = 0, ans = nums.length+1;
        for(int j = 0; j<nums.length; ++j){
            target -= nums[j];
            while(target<=0){
                ans = Math.min(ans, j-i+1);
                target += nums[i++];
            }
        }
        return ans % (nums.length + 1);
    }
}
