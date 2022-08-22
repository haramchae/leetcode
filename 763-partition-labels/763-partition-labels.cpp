class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> v;
        unordered_map<char, int> um;
        int start = -1, last = 0;
        for(int i = 0; i<s.size(); i++){
            um[s[i]]=i;
        }
        for(int i = 0; i<s.size(); i++){
            last = max(last, um[s[i]]);
            if(last == i){
                v.push_back(last-start);
                start = i;
            }
        }
        return v;
    }
};