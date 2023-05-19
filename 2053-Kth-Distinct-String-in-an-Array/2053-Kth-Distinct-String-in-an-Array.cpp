class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> um;
        for(auto s: arr){
            um[s]++;
        }
        for(auto s: arr){
            if(um[s]==1) k--;
            if(k==0) return s;
        }
        return "";

    }
};
