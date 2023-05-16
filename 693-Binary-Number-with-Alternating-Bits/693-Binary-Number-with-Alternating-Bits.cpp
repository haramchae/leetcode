class Solution {
public:
    bool hasAlternatingBits(int n) {
        int pre = -1, temp;
        while(n>0){
            temp = n%2;
            if(pre == temp) return false;
            pre = temp;
            n /= 2;
        }
        return true;
    }
};
