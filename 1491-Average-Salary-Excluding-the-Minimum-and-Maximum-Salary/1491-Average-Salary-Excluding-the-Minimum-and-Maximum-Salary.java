class Solution {
    public double average(int[] salary) {
        double sum = 0, ans = 0;
        int n = salary.length;
        int maxNum = Integer.MIN_VALUE;
        int minNum = Integer.MAX_VALUE;
        for(int i = 0; i<salary.length; ++i){
            sum += salary[i];
            maxNum = Math.max(maxNum, salary[i]);
            minNum = Math.min(minNum, salary[i]);
        }
        ans = (sum-maxNum-minNum)/(n-2);
        return ans;
    }
}
