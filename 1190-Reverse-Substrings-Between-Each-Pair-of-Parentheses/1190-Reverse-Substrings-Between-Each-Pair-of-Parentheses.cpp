class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i = 0; i<s.size(); ++i){
            if(s[i]=='('){
                st.push(i);
            }else if(s[i]==')'){
                int begin = st.top()+1;
                int end = i;
                reverse(s.begin()+begin, s.begin()+end);
                st.pop();
            }
        }
        string str;
        for(auto it: s){
            if(it == '(' || it==')'){
                continue;
            }else{
                str.push_back(it);
            }
        }
        return str;
    }

    
};
