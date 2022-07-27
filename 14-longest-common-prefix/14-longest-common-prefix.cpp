class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int size = strs.size();
        sort(strs.begin(), strs.end());
        string start =  strs[0];
        string last =  strs[size - 1];
        
        for(int i = 0; i < start.size(); i++){
            if(start[i]==last[i]){
                ans += start[i];
            }else{
                break;
            }
        }
        
        return ans;
    }
};