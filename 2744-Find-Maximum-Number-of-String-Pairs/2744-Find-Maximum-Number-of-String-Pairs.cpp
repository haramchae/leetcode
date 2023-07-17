class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans = 0;
        unordered_set<string> us;
        for(auto word: words){
            string t = word;
            swap(t[0], t[1]);
            if(us.find(t)!=us.end()){
                ans++;
            }
            us.insert(word);
        }
        return ans;
    }
};
