class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for(string& s: emails){
            string email = "";
            for(char c: s){
                if(c=='@' || c=='+') break;
                if(c=='.') continue;
                email += c;
            }
            email += s.substr(s.find('@'));
            st.insert(email);
        }
        return st.size();
    }
};
