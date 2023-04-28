class Solution {
public:
    int bitwiseComplement(int n) {
        int m = 1;
        while(n>m) m = m * 2 + 1;
        return m - n;
    }
};
