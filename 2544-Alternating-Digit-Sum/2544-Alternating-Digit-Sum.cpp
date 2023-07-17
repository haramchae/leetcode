class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> v;
        while(n){
            v.push_back(n%10);
            n/=10;
        }
        int sum = 0, check = 1;
        for(int i = v.size()-1; i>=0; --i){
            sum+=v[i]*check;
            check *= -1;
        }
        return sum;
    }
};
