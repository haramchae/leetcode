class Solution {
public:
    int minimumDeletions(string s) {
        stack<int> st;
        int n = s.size(), ans = 0;
        for(int i = n-1; i>=0; --i){
            if(!st.empty() && st.top()<s[i]){
                ans++;
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return ans;
    }
};
