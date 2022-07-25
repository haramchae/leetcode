class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v;
        vector<int> ans;
        int temp = 0, count = 0;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1){
                    temp++;
                }
            }
            v.push_back(temp);
            temp=0;
        }
        while(count<k){
            for(int l = 0; l<v.size(); l++){
                if(v[l]==0){
                    ans.push_back(l);
                    count++;
                }
                if(count>=k){
                    break;
                }
                v[l]--;
            }
        }
        return ans;
    }
};