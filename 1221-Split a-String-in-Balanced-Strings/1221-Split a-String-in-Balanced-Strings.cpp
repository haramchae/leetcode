class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, right = 0, left = 0;
        for(auto c: s){
            if(c == 'R') right++;
            else left++;
            if(right != 0 && right == left){
                count++;
                right = 0;
                left = 0;
            }
        }
        return count;
    }
};
