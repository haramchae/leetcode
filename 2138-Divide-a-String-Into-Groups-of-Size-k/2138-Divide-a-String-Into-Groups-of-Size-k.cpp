class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        while(s.size()>=k){
            string temp = s.substr(0, k);
            s.erase(0, k);
            v.push_back(temp);
        }
        while(s.size()<k && s.size()!=0){
            s+=fill;
        }
        if(s.size()!=0) v.push_back(s);
        return v;
    }
};
