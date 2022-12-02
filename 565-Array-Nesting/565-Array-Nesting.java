class Solution {
    public int arrayNesting(int[] nums) {
        int size = nums.length, ans = 0;
        boolean[] visited = new boolean[size];
        for(int i = 0; i<size; ++i){
            int index = i, count = 0;
            while(!visited[index]){
                count++;
                int temp = nums[index];
                visited[index] = true;
                index = temp;
            }
            ans = Math.max(count, ans);
        }
        return ans;
    }
}
