class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        vector<int> ans(s.size());
        for(int i = 0; i<s.size(); i++){
            if(s[i]==c) v.push_back(i);
            ans[i] = 0;
        }
        for(int j = 0; j<s.size(); j++){
            if(s[j]!=c){
                int min = INT_MAX;
                int temp = 0;
                for(int k = 0; k<v.size(); k++){
                    temp = abs(j-v[k]);
                    if(temp<min) min = temp;
                }
                ans[j]=min;
            }
        }
        return ans;
    }
};
