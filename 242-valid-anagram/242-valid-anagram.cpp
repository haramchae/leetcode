class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> v;
        vector<char> v2;
        for(int i = 0; i<t.size(); i++){
            v.push_back(t[i]);
        }
        for(int j = 0; j<s.size(); j++){
            v2.push_back(s[j]);
        }
        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end());
        if(v.size()!=v2.size()){
            return false;
        }
        for(int i = 0; i<v.size(); i++){
            if(v[i]!=v2[i]){
                //cout<<v[i]<<" "<<v2[i]<<"\n";
                return false;
            }
        }
        
        return true;
    }
};