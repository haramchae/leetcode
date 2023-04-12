class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat[0].size(), m = mat.size();
        if(n*m != r*c) return mat;
        vector<vector<int>> v(r, vector<int> (c,0));
        vector<int> v2;
        for(int i = 0; i<m; ++i){
            for(int j = 0; j<n; ++j){
                v2.insert(v2.begin(), mat[i][j]);
            }
        }
        for(int i = 0; i<r; ++i){
            for(int j = 0; j<c; ++j){
                v[i][j] = v2.back();
                v2.pop_back();
            }
        }
        return v;
    }
};
