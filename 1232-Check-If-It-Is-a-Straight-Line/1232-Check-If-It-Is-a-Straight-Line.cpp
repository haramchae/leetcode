class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int preX = coordinates[1][0] - coordinates[0][0];
        int preY = coordinates[1][1] - coordinates[0][1];
        for(int i = 2; i<coordinates.size(); ++i){
            if((coordinates[i][0]-coordinates[0][0]) * preY !=  (coordinates[i][1]-coordinates[0][1]) * preX)
                return false;
        }
        
        return true;
    }
};
