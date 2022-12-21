class Solution {
    public int findLongestChain(int[][] pairs) {
        int ans = 0, min = Integer.MIN_VALUE;
        Arrays.sort(pairs, (o1, o2)->(o1[1]-o2[1]));
        for(int[] pair: pairs){
            if(min<pair[0]){
                ans++;
                min = pair[1];
            }
        }
        return ans;
    }
}
