class Solution {
    public int findJudge(int n, int[][] trust) {
        int[] count = new int[n+1];
        for(int i = 0; i<trust.length; ++i){
            count[trust[i][0]]--;
            count[trust[i][1]]++;
        }
        for(int j = 1; j<count.length; ++j){
            if(count[j]==n-1) return j;
        }
        return -1;
    }
}
