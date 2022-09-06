class Solution {
public:
    string sortSentence(string s) {
        vector<string> v;
        stringstream ss(s);
        string temp;
        string ans;
        while(ss>>temp){
            v.push_back(temp);
        }
        vector<string> v2 = v;
        for(int i = 0; i<v.size(); i++){
            v2[(int) v[i][v[i].size()-1] - 49] =  v[i];
        }
        
        for(auto it: v2){
            it.pop_back();
            ans +=it;
            ans +=" ";
        }
        ans.pop_back();
        
        return ans;
    }
};