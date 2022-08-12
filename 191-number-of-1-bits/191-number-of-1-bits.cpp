class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        
        while (n) { // equivalent to n != 0
            n &= (n - 1); // to clear the right most set bit
            ++ans;
        }
        
        return ans;
    }
};