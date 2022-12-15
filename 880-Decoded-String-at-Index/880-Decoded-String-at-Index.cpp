class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long n = 0, i = 0;
        for(; i<s.size(); ++i){
            if(isdigit(s[i])) n *= (s[i] - '0');
            else n++;
        }
        while(--i){
            k%=n;
            if(k==0 && isalpha(s[i])) return (string) "" + s[i];
            if(isdigit(s[i])) n /= (s[i] - '0');
            else --n;
        }
        return s.substr(0, 1);
    }
};
