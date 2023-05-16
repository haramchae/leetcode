class Solution {
public:
    bool areNumbersAscending(string s) {
        int pre = -1, cur = -1;
        string temp = "";
        s += " ";
        for(int i = 0; i<s.size(); ++i){
            if(isdigit(s[i])){
                temp += s[i];
            }else if(temp.size()){
                cur = stoi(temp);
                if(pre>=cur) return false;
                pre = cur;
                temp = "";
            }
        }
        return true;
    }
};
