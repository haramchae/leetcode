class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int large = -1, index;
        for(int i = 0; i<nums.size(); ++i){
            if(nums[i]>large){
                large = nums[i];
                index = i;
            }
        }       
        for(int i = 0; i<nums.size(); ++i){
            if(nums[i]*2 > large && i != index){
                return -1;
            }
        }
        return index;
    }
};
