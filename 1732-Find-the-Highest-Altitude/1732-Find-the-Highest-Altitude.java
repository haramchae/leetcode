class Solution {
    public int largestAltitude(int[] gain) {
        int n = gain.length, ans = Integer.MIN_VALUE;
        int[] altitude = new int[n+1];
        for(int i = 0; i<n; ++i){
            altitude[i+1] =  gain[i] + altitude[i];
        }
        for(int j = 0; j<n+1; ++j){
            ans = Math.max(ans, altitude[j]);
        }
        return ans;
        
    }
}
