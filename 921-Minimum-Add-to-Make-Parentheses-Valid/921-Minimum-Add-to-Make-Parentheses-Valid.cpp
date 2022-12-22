class Solution {
public:
    int minAddToMakeValid(string s) {
        int leftNeed = 0, rightNeed = 0;
        for(auto it: s){
            if(it == '(') rightNeed++;
            else{
                if(rightNeed>0) rightNeed--;
                else leftNeed++;
            }
        }
        return rightNeed+leftNeed;
    }
};
