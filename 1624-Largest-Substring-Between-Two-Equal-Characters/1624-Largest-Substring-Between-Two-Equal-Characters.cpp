class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> um;
        int ans = -1;
        for(int i = 0; i<s.size(); ++i){
            char c = s[i];
            if(um.find(c)!=um.end()){
                ans = max(ans, i - um[c] - 1);
            }else{
                um[c] = i;
            }
        }
        return ans;
    }
};
