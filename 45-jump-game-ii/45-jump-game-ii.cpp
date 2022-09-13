class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0, current = 0, maxReach = 0;
        for(int i = 0; i<nums.size()-1; i++){
            maxReach = max(maxReach, nums[i]+i);
            if(i == current){
                jump++;
                current = maxReach;
            }
        }
        return jump;
    }
    
    
};