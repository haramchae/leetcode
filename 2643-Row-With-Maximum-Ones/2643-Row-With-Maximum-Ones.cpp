class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index = 0, num = 0;
        for(int i = 0; i<mat.size(); i++){
            int temp = 0;
            for(int j = 0; j<mat[i].size(); j++){
                if(mat[i][j] == 1){
                    temp++;
                }
            }
            if(temp>num){
                index = i;
                num = temp;
            }
        }
        return {index, num};
    }
};
