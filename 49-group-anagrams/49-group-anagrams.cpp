class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> ctn;
        for(int i = 0; i < strs.size(); i++){
            string str = strs[i];
            string key = str;
            sort(key.begin(), key.end());
            ctn[key].push_back(str);
        }
        for (auto it: ctn) {
            ans.push_back(it.second);
        }     
        return ans;
    }
};