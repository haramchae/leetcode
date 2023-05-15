class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());
        int count = 0, total = 0;
        for(auto num: cost){
            if(count == 2){
                count = 0;
                continue;
            }
            total += num;
            count++;
        }
        return total;
    }
};
