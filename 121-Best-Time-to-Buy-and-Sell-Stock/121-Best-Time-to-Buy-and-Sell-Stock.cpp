class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, min = prices[0];
        for(auto it: prices){
            if(it<min){
                min = it;
            }else{
                profit = max(profit, it-min);
            }
        }
        return profit;
    }
};
