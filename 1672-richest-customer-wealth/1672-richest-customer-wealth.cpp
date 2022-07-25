class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = -1, temp = 0;
        for(int i = 0; i<accounts.size(); i++){
            for(int j = 0; j<accounts[i].size(); j++){
                temp = temp + accounts[i][j];
            }
            if(temp>wealth){
                wealth = temp;
            }
            temp = 0;
        }
        return wealth;
        
    }
};