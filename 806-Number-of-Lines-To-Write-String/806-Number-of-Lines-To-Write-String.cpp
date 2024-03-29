class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int res = 1, cur = 0;
        for (char c : s) {
            int width = widths[c - 'a'];
            res = cur + width > 100 ? res + 1 : res;
            cur = cur + width > 100 ? width : cur + width;
        }
        return {res, cur};
    }
};
