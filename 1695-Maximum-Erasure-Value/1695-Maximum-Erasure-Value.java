class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        int n = nums.length;
        int left = 0, right = 0, sum = 0, ans = 0;
        while(left<n && right<n){
            if(!set.contains(nums[right])){
                sum += nums[right];
                ans = Math.max(ans, sum);
                set.add(nums[right++]);
            }else{
                sum -= nums[left];
                set.remove(nums[left++]);
            }
        }
        return ans;
    }
}
