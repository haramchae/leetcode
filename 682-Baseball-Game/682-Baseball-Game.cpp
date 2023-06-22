class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(auto s: operations){
            if(s == "+"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                st.push(first + second);
            }else if(s == "C"){
                st.pop();
            }else if(s == "D"){
                st.push(st.top()*2);
            }else{
                st.push(stoi(s));
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
