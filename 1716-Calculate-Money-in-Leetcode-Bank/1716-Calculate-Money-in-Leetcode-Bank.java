class Solution {
    public int totalMoney(int n) {
        int plus = 0, total = 0, money = 1;
        for(int i = 0; i<n; ++i){
            total = total + plus + money;
            money++;
            if(money == 8){
                money = 1;
                plus ++;
            }
        }
        return total;
    }
}
