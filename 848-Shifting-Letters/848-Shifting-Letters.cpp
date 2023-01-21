class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int sum = 0;
        for(int i = s.size()-1; i>=0; --i){
            sum += shifts[i];
            s[i] = (s[i]-'a'+sum) % 26 + 'a';
        }
        return s;
    }
};
