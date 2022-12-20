class Solution {
    public int averageValue(int[] nums) {
        double ans = 0, count = 0;
        for(int i = 0; i<nums.length; ++i){
            if(nums[i]%2==0 && nums[i]%3==0){
                ans += nums[i];
                count++;
            }
        }
        return (int)Math.round(ans/count);
    }
}
