class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = -1, temp = 0;
        for(auto &customer : accounts){
            temp = accumulate(customer.begin(), customer.end(), 0);
            wealth = max(wealth, temp);
        }
        return wealth;
        
    }
};