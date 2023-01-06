class Solution {
public:
    bool canJump(vector<int>& nums) {  
        if(nums.size() == 1) return true;
        if(nums[0]==0) return false;
        int maxIndex = 0, goalIndex = nums.size()-1;
        for(int i = 0; i<nums.size() - 1; ++i){
            int temp = i + nums[i];
            if(i>maxIndex) return false;
            if(temp >= goalIndex && maxIndex>= i) return true;
            maxIndex = max(maxIndex, temp);
        }
        return false;
    }
};
