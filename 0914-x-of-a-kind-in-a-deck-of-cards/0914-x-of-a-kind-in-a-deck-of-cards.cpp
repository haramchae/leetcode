class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int gcd = 0;
        unordered_map<int, int> um;
        for(auto it: deck){
            um[it]++;
        }
        for(auto it: um){
            gcd = __gcd(it.second, gcd);
        }
        return gcd>1;
    }
};