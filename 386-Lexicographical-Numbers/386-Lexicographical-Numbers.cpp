class Solution {
public:
    vector<int> v;
    vector<int> lexicalOrder(int n) {
        for(int i = 1; i<=9; ++i){
            helper(i, n);
        }
        return v;
    }

    void helper(int temp, int n){
        if(temp>n) return;
        v.push_back(temp);
        for(int j = 0; j<=9; j++){
            helper(temp*10+j, n);
        }
    }
};
