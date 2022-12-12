class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int[] sorted = nums.clone();
        Arrays.sort(sorted);
        int size = nums.length, left = 0, right = nums.length - 1;
        while(left<size && sorted[left]==nums[left]) left++;
        while(right>left && sorted[right]==nums[right]) right--;
        return right - left + 1;
    }
}
