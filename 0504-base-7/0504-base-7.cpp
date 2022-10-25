class Solution {
public:
    string convertToBase7(int num) {
        string ans = "";
        int check = num;
        if(num==0) ans.push_back('0');
        while(num!=0){
            int temp = abs(num%7);
            ans = to_string(temp) + ans;
            num = num/7;
        }
        if(check<0) ans = "-"+ans;
        return ans;
    }
};