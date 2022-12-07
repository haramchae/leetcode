class Solution {
public:
    string arrangeWords(string text) {
        text[0] = tolower(text[0]);
        stringstream ss(text);
        map<int, string> m;
        string temp;
        while(ss>>temp){
            m[temp.size()] += temp + " ";
        }
        string ans = "";
        for(auto it: m){
            ans += it.second;
        }
        ans[0] = toupper(ans[0]);
        ans.pop_back();
        return ans;
    }
};
