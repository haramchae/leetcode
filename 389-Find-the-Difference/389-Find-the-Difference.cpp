class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i = 0; i<s.size(); i++){
            t[i+1] += t[i] - s[i];
        }
        return t[t.size()-1];
    }
};


/**
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int index = 0;
        while(index<s.size() && index<t.size()){
            if(s[index]!=t[index]) break;
            index++;
        }
        return t[index];
    }
};
**/
