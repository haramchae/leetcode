class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0){
            return 0;
        }
        int start = 0, last = 0, ans = INT_MIN;
        unordered_map<char, int> m;
        
        while(last<s.size()){
            m[s[last]]++;
            if(m.size()==(last - start + 1)){
                ans = max(ans, (last - start + 1));
            }else if(m.size() < (last - start + 1)){
                while(m.size() < (last - start + 1)){
                    m[s[start]]--;
                    if(m[s[start]] == 0){
                        m.erase(s[start]);
                    }
                    start++;
                } 
            }
            last++;
        }

        return ans;
    }
};