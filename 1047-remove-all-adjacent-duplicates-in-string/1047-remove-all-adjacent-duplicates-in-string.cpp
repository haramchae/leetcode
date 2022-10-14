class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for(auto it: s){
            if(ans.size() && it == ans.back()){
                ans.pop_back();
            }else{
                ans.push_back(it);
            }
        }
        return ans;
    }
};