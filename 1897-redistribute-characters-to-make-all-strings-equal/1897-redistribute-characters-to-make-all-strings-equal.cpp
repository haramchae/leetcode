class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int count[26] = {0};
        for(auto it: words){
            for(auto w: it){
                count[w -'a']++;
            }
        }
        
        for(int i = 0; i<26; i++){
            if(count[i]%words.size()!=0) return false;
        }
        return true;
    }
};