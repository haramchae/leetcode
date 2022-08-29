class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int checker = image[sr][sc];
        DFS(image, sr, sc, color, checker);
        return image;
    }
    
    void DFS(vector<vector<int>>& image, int sr, int sc, int color, int checker){
        if(sr<0 || sc<0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc]!=checker || image[sr][sc] == color){
            return;
        }
        image[sr][sc]=color;
        DFS(image, sr-1, sc, color, checker);
        DFS(image, sr, sc-1, color, checker);
        DFS(image, sr+1, sc, color, checker);
        DFS(image, sr, sc+1, color, checker);
    }
};