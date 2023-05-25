class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> v;
        for(int i = 0, j = 0; i<s.size(); i = j){
            while(s[i]==s[j] && j<s.size()) j++;
            if(j - i >= 3) v.push_back({i, j-1});
        }
        return v;
    }
};
