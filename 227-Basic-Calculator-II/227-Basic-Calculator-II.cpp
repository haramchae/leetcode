class Solution {
public:
    int calculate(string s) {
        int cur = 0, ans = 0, temp = 0;
        char prevOp = '+';
        s+="##";
        for(auto it: s){
            if(it == ' ') continue;
            else if(isdigit(it)){
                cur = cur * 10 + (it - '0');
            }else{
                if(prevOp == '*'){
                    temp*=cur;
                }else if(prevOp == '/'){
                    temp/=cur;
                }else{
                    ans += temp;
                    temp = prevOp == '+' ? cur : -cur;
                }
                cur = 0;
                prevOp = it;
            }
        }

        return ans;
    }
};
