class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long even = 0, odd = 0;
        for(auto num: nums){
            even = max(even, odd+num);
            odd = even - num;
        }
        return even;
    }
};
