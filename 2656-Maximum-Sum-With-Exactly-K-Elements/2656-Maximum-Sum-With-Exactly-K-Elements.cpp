class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans = 0;
        for(int num: nums){
            if(num>ans) ans = num;
        }
        return ans * k + k * (k-1)/2;
    }
};
