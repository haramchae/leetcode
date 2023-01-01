class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int index){
        if(index == word.size()) return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[i].size() || board[i][j]!=word[index]) return false;
        board[i][j] = '0';
        bool ans = dfs(board, word, i+1, j, index+1) || dfs(board, word, i, j+1, index+1) ||
        dfs(board, word, i-1, j, index+1) || dfs(board, word, i, j-1, index+1);
        board[i][j] = word[index];
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i<board.size(); ++i){
            for(int j = 0; j<board[i].size(); ++j){
                if(board[i][j]==word[0] && dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};
