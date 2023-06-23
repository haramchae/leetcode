class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int smallSum = prices[0] + prices[1];
        return smallSum > money ? money : money - smallSum;
    }
};
