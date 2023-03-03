class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        for(int i = pref.size()-1; i>0; --i){
            pref[i] ^= pref[i-1];
        }
        return pref;
    }
};

/*
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans = pref;
        for(int i = 1; i<pref.size(); ++i){
            ans[i] = pref[i-1]^pref[i];
        }
        return ans;
    }
};
*/
