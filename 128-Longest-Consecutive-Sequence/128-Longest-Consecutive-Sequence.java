class Solution {
    public int longestConsecutive(int[] nums) {
        HashSet<Integer> hs = new HashSet<>();
        for(int i = 0; i<nums.length; i++) hs.add(nums[i]);
        int maxNum = 0;
     
        for(int i = 0; i<nums.length; i++){
            if(!hs.contains(nums[i]-1)){
                int count = 1;
                int temp = nums[i]+1;
                while(hs.contains(temp)){
                    count++;
                    temp++;
                }
                maxNum = Math.max(maxNum, count);
            }
        }

        return maxNum;
    }
}
