class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        int check = 0;
        stack<char> st;
        for(auto it: s) st.push(it);
        while(!st.empty()){
            char temp = st.top();
            if(temp == '*'){
                check++;
                st.pop();
                continue;
            }else{
                if(check == 0){
                    ans += temp;
                    st.pop();
                }else{
                    st.pop();
                    check--;
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
