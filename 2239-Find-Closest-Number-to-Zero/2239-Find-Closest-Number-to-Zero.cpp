class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int num: nums){
            if(abs(num)<abs(ans)){
                ans = num;
            }else if(abs(num)==abs(ans)){
                ans = max(ans, num);
            }
        }
        return ans;
    }
};
