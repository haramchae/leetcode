class Solution {
public:
    int secondHighest(string s) {
        int ary[2] = {-1,-1};
        for(auto c: s){
            if(c>='0' && c<='9'){
                c -= '0';
                if(ary[0]<c){
                    ary[1] = ary[0];
                    ary[0] = c;
                }
                else if(c!=ary[0]&&c>ary[1]) ary[1] = c;
            }
        }
        return ary[1];
    }
};
