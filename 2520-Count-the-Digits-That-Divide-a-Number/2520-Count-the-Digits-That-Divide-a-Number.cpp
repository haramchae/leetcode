class Solution {
public:
    int countDigits(int num) {
        int ans = 0, check = num;
        while(num>9){
            int temp = num%10;
            if(check%temp == 0) ans++;
            num /= 10;
        }
        if(num!=0 && check%num==0) ans++;
        return ans;
    }
};
