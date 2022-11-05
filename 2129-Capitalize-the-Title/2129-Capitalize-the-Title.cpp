class Solution {
public:
    string ans;
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word;
        while(getline(ss, word, ' ')){
            capitalizeString(word);
        }        
        ans.pop_back();
        return ans;
    }

    void capitalizeString(string s){
        if(s.size()==1) s[0]=tolower(s[0]);
        else if(s.size()==2) {
            s[0]=tolower(s[0]);
            s[1]=tolower(s[1]);
        }else{
            s[0]=toupper(s[0]);
            for(int i = 1; i<s.size(); i++){
                s[i]=tolower(s[i]);
            }
        }
        ans += s;     
        ans += ' ';   
    }
};
