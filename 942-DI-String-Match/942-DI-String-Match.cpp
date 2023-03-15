class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l = 0, n = s.size(), r = n;
        vector<int> v(n+1, 0);
        for(int i = 0; i<n; ++i){
            if(s[i]=='I') v[i] = l++;
            else v[i] = r--;
        }
        v[n] = r;
        return v;
    }
};
