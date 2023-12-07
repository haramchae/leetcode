class Solution {
public:
    string removeTrailingZeros(string num) {
        int lastDigit = num.size() - 1;
        for(int i = num.size() - 1; i>= 0; i--){
            if(num[i]==48){
                lastDigit--;
                continue;
            }
            break;
        }
        return num.substr(0, lastDigit+1);
    }
};
