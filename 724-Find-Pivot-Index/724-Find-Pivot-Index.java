class Solution {
    public int pivotIndex(int[] nums) {
        for(int i = 0; i<nums.length; ++i){
            if(check(i, nums)==true) return i;
        }
        return -1;
    }

    boolean check(int num, int[] nums){
        int leftSum = 0, rightSum = 0;
        for(int i = 0; i<num; ++i){
            leftSum+=nums[i];
        }
        for(int j = num+1; j<nums.length; ++j){
            rightSum+=nums[j];
        }
        return leftSum == rightSum ? true : false;
    }
}
