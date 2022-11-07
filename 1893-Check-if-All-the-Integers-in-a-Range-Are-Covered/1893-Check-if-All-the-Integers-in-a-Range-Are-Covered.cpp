class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int coverNum[51] = {0};
        for(int i = 0; i<ranges.size(); i++){
            for(int j = ranges[i][0]; j<=ranges[i][1]; j++){
                coverNum[j]++;
            }
        }
        for(int k=left; k<=right; k++){
            if(coverNum[k]==0) return false;
        }
        return true;
    }
};
