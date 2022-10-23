class Solution {
public:
    int fillCups(vector<int>& amount) {
        sort(amount.begin(), amount.end());
        int sum = amount[0] + amount[1] + amount[2];
        if(amount[2]>=amount[0]+amount[1]) return amount[2];
        return sum/2+sum%2;
    }
};