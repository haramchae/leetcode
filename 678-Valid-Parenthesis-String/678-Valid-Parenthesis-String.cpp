class Solution {
public:
    bool checkValidString(string s) {
        stack<int> star;
        stack<int> paren;
        for(int i = 0; i<s.size(); ++i){
            if(s[i]=='(') paren.push(i);
            else if(s[i]=='*') star.push(i);
            else{
                if(!paren.empty()) paren.pop();
                else if(!star.empty()) star.pop();
                else return false;
            }
        }
        while(!paren.empty()){
            if(!star.empty()){
                if(star.top()>paren.top()){
                    star.pop();
                    paren.pop();
                }else return false;
            }else return false;
        }
        return true;
    }
};
