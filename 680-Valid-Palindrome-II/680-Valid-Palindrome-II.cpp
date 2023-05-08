class Solution {
public:
    bool validPalindrome(string s) {
        if(s.size()<3) return true;
        string rev = s;
        reverse(rev.begin(), rev.end());
        if(s==rev) return true;
        int left = 0, right = s.size()-1;
        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }else{
                return checker(s, left+1, right) || checker(s, left, right-1);
            }
        }
        return true;
    }

    bool checker(string s, int left, int right){
        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }else{
                return false;
            }
        }
        return true;
    }
};

