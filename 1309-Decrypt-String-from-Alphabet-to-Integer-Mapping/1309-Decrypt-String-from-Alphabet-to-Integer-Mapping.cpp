class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size(), i = 0;
        string ans = "";
        while(i<n){
            if(i + 2 < n && s[i+2] == '#'){
                int num = (s[i] - 48) * 10 + (s[i+1]-48);
                ans += char(num + 'a' - 1);
                i+=3;
            }else{
                ans += char(s[i]-49+'a');
                i++;
            }
        }
        return ans;
    }
};
