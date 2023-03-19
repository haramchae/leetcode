class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        map<int, int> m2;
        for(int num: arr){
            m[num]++;
        }
        for(auto it: m){
            m2[it.second]++;
            if(m2[it.second]==2) return false;
        }
        return true;
    }
};
