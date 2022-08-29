class Solution {
    int ans = 0, temMax = 0;
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    temMax = 0;
                    DFS(grid, i, j);
                }
            }
        }
        return ans;
    }
    
    
    void DFS(vector<vector<int>>& grid, int i, int j){
        if(i<0 || j<0 || i >= grid.size() || j>= grid[0].size() || grid[i][j]!=1){
            return;
        }
        grid[i][j]=0;
        temMax++;
        DFS(grid, i+1, j);
        DFS(grid, i, j+1);
        DFS(grid, i-1, j);
        DFS(grid, i, j-1);
        
        ans = max(ans, temMax);
    }
};