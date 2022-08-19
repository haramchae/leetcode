class Solution {
public:
    int firstUniqChar(string s) {
        int ans = -1;
        unordered_map<int, int> um;
        for(int i = 0; i<s.size(); i++){
            um[s[i]]++;
        }
        for(int i = 0; i<s.size(); i++){
            if(um[s[i]]==1){
                ans = i;
                break;
            }
        }
        return ans;
    }
};