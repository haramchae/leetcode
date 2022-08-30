class Solution {
public:
    int minPartitions(string n) {
        char ans = '0';
        for(auto it :n){
            if(it > ans){
                ans = it;
            }
        }
        return ans - '0';
    }
};