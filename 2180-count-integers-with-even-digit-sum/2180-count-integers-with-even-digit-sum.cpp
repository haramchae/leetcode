class Solution {
public:
    int countEven(int num) {
        int sum = 0;
        int ans = num;
        while(num){
            sum += num%10;
            num = num / 10;
        }
        
        return sum%2==0 ? ans/2 : (ans-1)/2;
    }
};