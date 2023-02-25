class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> dic;
        int index = 1;
        for(auto it: order){
            dic[it] = index++;
        }
        sort(s.begin(), s.end(), [&](char a, char b) {return dic[a]< dic[b]; });
        return s;
    }
};
