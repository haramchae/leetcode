class Solution {
public:
    bool isVowels(char c){
        if(c == 'a' || c=='e' || c=='i' || c=='o' || c=='u' ||
        c == 'A' || c=='E' || c=='I' || c=='O' || c=='U') return true;
        return false;
    }
    string reverseVowels(string s) {
        int left = 0, right = s.size()-1;
        while(right>left){
            if(isVowels(s[left]) && isVowels(s[right])){
                swap(s[left++], s[right--]);
            }
            else if(isVowels(s[left]) == false){
                left++;
            }else{
                right--;
            }
        }
        return s;
    }
};
