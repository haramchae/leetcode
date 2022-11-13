class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n>0){
        double num = log10(n)/log10(3);
        if(ceil(num) == floor(num)) return true;
        else return false;
        }
        return false;
    }
};
