class Solution {
    public int[][] transpose(int[][] matrix) {
        int c = matrix.length;
        int r = matrix[0].length;
        int ans[][] = new int[r][c];
        for(int i = 0; i<c; i++){
            for(int j = 0; j<r; j++){
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
}
