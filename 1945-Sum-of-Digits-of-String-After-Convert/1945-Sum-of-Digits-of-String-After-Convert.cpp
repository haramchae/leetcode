class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for(auto c: s){
            int val = c-'a' + 1;
            sum += val >= 10 ? (val%10 + val/10) : val; 
        }
        while(--k){
            int temp = sum;
            sum = 0;
            while(temp){
                sum += temp%10;
                temp /= 10;
            }
        }
        return sum;
    }
};
