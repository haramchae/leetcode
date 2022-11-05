class Solution {
public:
    string makeFancyString(string s) {
        if(s.size()<3) return s;
        string ans;
        for(int i = 0; i<s.size(); i++){
            if(i==0 || i == s.size()-1){
                ans.push_back(s[i]);
            }
            else if(s[i]==s[i-1] && s[i]==s[i+1]){

            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
