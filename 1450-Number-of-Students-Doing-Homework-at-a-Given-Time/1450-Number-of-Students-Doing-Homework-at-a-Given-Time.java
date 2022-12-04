class Solution {
    public int busyStudent(int[] startTime, int[] endTime, int queryTime) {
        int size = startTime.length, ans = 0;
        for(int i = 0; i<size; ++i){
            for(int j = startTime[i]; j<=endTime[i]; ++j){
                if(j==queryTime) ans++;
            }
        }
        return ans;
    }
}
