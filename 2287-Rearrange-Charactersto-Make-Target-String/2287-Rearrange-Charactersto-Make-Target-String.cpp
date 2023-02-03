class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char, int> sm, tm;
        int minNum = INT_MAX;
        for(auto it: s){
            sm[it]++;
        }
        for(auto it: target){
            tm[it]++;
        }
        for(auto it: tm){
            minNum = min(minNum, sm[it.first]/it.second);
        }
        return minNum;
    }
};
