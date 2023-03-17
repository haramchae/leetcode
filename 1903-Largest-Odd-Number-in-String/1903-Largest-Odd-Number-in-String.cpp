class Solution {
public:
    string largestOddNumber(string num) {
        while(true){
            if(num=="") break;
            char c = num.back();
            int temp = int(c);
            if(temp%2==0) num.pop_back();
            else break;
        }
        return num;
    }
};
