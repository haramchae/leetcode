class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        if(mat.size() == 1) return mat[0][0];
        int a = 0, b = 0, c = 0, d = mat.size() -1, ans = 0;
        while(a<mat.size()){
            ans += mat[a++][b++];
            ans += mat[c++][d--];
        }
        if(mat.size()%2 == 1){
            ans-= mat[mat.size()/2][mat.size()/2];
        }
        return ans;
    }
};
