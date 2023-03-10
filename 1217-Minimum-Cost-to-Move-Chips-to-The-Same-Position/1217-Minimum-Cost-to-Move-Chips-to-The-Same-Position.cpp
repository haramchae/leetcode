class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int oddP = 0, evenP = 0;
        for(auto it: position){
            it % 2 == 0 ? ++evenP : ++oddP; 
        }
        return min(oddP, evenP);
    }
};
