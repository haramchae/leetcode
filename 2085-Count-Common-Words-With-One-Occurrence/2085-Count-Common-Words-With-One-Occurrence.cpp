class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> um1, um2;
        for(auto word: words1) um1[word]++;
        for(auto word: words2) um2[word]++;
        int count = 0;
        for(auto [s,i]: um1){
            if(i==1 && um2[s]==1) count++;
        }
        return count;
    }
};
