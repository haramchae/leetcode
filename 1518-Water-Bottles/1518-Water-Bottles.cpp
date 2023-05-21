class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        while(numBottles>=numExchange){
            int change = numBottles/numExchange;
            int remain = numBottles%numExchange;
            total += change;
            numBottles = change + remain;
        }
        return total;
    }
};
