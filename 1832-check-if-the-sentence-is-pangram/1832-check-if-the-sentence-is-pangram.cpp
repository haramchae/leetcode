class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
        int ary[26] = {0};
        for(int i = 0; i<sentence.size(); i++){
            ary[sentence[i]-97]++;
        }
        for(int j = 0; j<26; j++){
            if(ary[j]==0) return false;
        }
        return true;
    }
};