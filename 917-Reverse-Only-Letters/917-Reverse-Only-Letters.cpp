class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start = 0, last = s.size()-1;
        while(last>start){
            if(s[start]<65 || s[start]>122 || (90<s[start] && s[start]<97)){
                start++;            
                continue;
            }else if(s[last]<65 || s[last]>122 || (90<s[last] && s[last]<97)){
                last--;
                continue;
            }else{
                swap(s[start],s[last]);
                start++;
                last--;
            }
        }
        return s;
    }
};
