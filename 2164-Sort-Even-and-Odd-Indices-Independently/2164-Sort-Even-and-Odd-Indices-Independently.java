class Solution {
    public int[] sortEvenOdd(int[] nums) {
        int size = nums.length;
        int oddNums[] = new int[size/2];
        int evenNums[] = new int[size - size/2];
        for(int i = 0, k = 0, l = 0 ; i<size; i++){
            if(i%2==0) evenNums[k++] = nums[i];
            else oddNums[l++] = nums[i];
        }
        Arrays.sort(evenNums);
        Arrays.sort(oddNums);
        for(int j = 0, k = 0, l = oddNums.length - 1; j<size; j++){
            if(j%2==0){
                nums[j] = evenNums[k++];
            }else{
                nums[j] = oddNums[l--];
            }
        }
        return nums;
    }
}
