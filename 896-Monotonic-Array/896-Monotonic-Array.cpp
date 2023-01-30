class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increse = 0, decrese = 0;
        for(int i = 1; i<nums.size(); ++i){
            if(nums[i]>nums[i-1]){
                increse = 1;
            }else if(nums[i]<nums[i-1]){
                decrese = 1;
            }
        }
        return increse && decrese ? false : true;
    }
};
