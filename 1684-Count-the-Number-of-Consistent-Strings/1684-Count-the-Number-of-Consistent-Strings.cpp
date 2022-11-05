class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        map<char, int> am;
        for(auto &ch: allowed) am[ch]++;    
        for(auto &it: words){
            if(contain(am,it)) ans++;
        }
        return ans;
    }

    bool contain(map<char,int> m, string s){
        map<char, int> wm;
        for(auto &ch: s) wm[ch]++;
        for(auto &it: wm){
            if(m.find(it.first)==m.end()){
                return false;
            }
        }        
        return true;
    }

   
};
