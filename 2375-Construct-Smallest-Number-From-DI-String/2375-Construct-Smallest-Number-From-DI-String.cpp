class Solution {
public:
    string smallestNumber(string pattern) {
        string ans = "";
        for(int i = 1; i<pattern.size()+2; ++i){
            ans += i + '0';
        }
        for(int j = 0; j<pattern.size(); ++j){
            int k = j;
            while(k>=0 && pattern[k]=='D'){
                swap(ans[k+1], ans[k]);
                k--;
            }
        }
        return ans;
    }
};
