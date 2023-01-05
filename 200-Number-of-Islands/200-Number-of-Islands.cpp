class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        int islands = 0;
        for(int i = 0; i<grid.size(); ++i){
            for(int j = 0; j<grid[0].size(); ++j){
                if(grid[i][j]=='1' && !visited[i][j]){
                    dfs(grid, i, j, visited);
                    islands++;
                }
            }
        }
        return islands;
    }

    void dfs(vector<vector<char>>& grid, int x, int y, vector<vector<bool>>& visited){
        visited[x][y] = true;
        grid[x][y] = '0';
        vector<vector<int>> temp {{1,0}, {0,1}, {-1,0}, {0,-1}};
        for(auto it: temp){
            int i = x + it[0];
            int j = y + it[1];
            if(i>=0 && j>=0 && i<grid.size() && j<grid[0].size() && !visited[i][j] && grid[i][j] == '1'){
                dfs(grid, i, j, visited);
            }
        }
    }
};
