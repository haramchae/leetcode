class Solution {
public:
    int romanToInt(string s) {
        if(s.empty()){
            return 0;
        }
        unordered_map<char, int> M = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        int ans = M[s.back()];
        
        for(int i = s.size() - 2; i>=0; i--){
            if(M[s[i]] >= M[s[i+1]]){
                ans += M[s[i]];
            }else{
                ans -= M[s[i]];
            }
        }
                
        return ans;
    }
};