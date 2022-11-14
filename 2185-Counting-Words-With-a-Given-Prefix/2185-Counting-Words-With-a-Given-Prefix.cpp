class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(auto it: words){
            int check = 0;
            for(int i = 0; i<pref.size(); i++){
                if(it[i]!=pref[i]){
                    check = 1;
                    break;   
                }
            }
            if(check == 0){
                count++;
            }
        }
        return count;
    }
};
