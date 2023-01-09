class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0, current = 0, total = 0;
        for(int i = 0; i<gas.size(); ++i){
            total += gas[i] - cost[i];
            current += gas[i] - cost[i];
            if(current < 0){
                current = 0;
                start = i + 1;
            }
        }
        return total < 0 ? -1 : start;
    }
};
