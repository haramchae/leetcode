class Solution {
public:
    int countSubstrings(string s) {
        int count = 0, n = s.size();
        vector<vector<int>> v(n, vector<int>(n,0));
        for(int i = 0; i < n; i++){
            v[i][i]=1;
            count++;
        }
        for(int col = 1; col<n; col++){
            for(int row = 0; row<col; row++){
                if(row == col - 1 && s[row]==s[col]){
                    v[row][col]=1;
                    count++;
                }else if(v[row+1][col-1]==1 && s[row]==s[col]){
                    v[row][col]=1;
                    count++;
                }
            }
        }
        return count;
    }
};