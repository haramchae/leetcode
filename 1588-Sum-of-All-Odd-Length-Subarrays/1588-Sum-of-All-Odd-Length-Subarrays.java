class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        int sum = 0, win = 1;
        while(win<=arr.length){
            for(int i = 0; i<=arr.length-win; i++){
                for(int j = i;  j<i+win; j++){
                    sum += arr[j];
                }
            }
            win += 2;
        }
        return sum;
    }
}
