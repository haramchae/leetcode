class Solution {
public:
    int maxDepth(string s) {
        int maxNum = 0;
        stack<char> st;
        for(int i = 0; i<s.size(); ++i){
            if(s[i]=='(') st.push('(');
            if(s[i]==')') st.pop();
            if(st.size()>maxNum) maxNum = st.size();
        }
        return maxNum;
    }
};
