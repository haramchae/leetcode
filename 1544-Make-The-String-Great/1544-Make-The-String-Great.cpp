class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string ans = "";
        for(int i = 0; i<s.size(); ++i){
            if(st.empty()) st.push(s[i]);
            else{
                char t = st.top();
                if(abs(t-s[i]) == 32){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
