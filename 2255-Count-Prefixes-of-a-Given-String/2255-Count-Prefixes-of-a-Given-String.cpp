class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int size = words.size(), cnt = 0;
        for(int i = 0; i<size; ++i){
            string str = words[i];
            if(str == s.substr(0, str.size())) cnt++;
        }
        return cnt;
    }
};
