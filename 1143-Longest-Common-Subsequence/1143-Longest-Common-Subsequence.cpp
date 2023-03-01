class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        /**
        int n = text1.size(), m = text2.size();
        vector<vector<int>> v(n, vector<int>(m, 0));
        int iCheck = 0, jCheck = 0;
        if(text1[0]==text2[0]){
            v[0][0] = 1;
            iCheck = 1;
            jCheck = 1;
        }
        for(int i = 0; i<n; ++i){
            for(int j = 0; j<m; ++j){
                if(i == 0){
                    if(text1[i] == text2[j] || iCheck == 1){
                        v[i][j] = 1;
                        iCheck = 1;
                    }
                }
                else if(j == 0){
                    if(text1[i] == text2[j] || jCheck == 1){
                        v[i][j] = 1;
                        jCheck = 1;
                    }
                }
                else{
                    if(text1[i] == text2[j]){
                        v[i][j] = v[i-1][j-1] + 1;
                    }else{
                        v[i][j] = max(v[i-1][j], v[i][j-1]);
                    }
                }
            }
        }      
        return v[n-1][m-1];
        **/
        int n = text1.size(), m = text2.size();
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i<n+1; ++i){
            for(int j = 1; j<m+1; ++j){
                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];

    }
};
