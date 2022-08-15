class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int current = 0; 
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[current++]=nums[i];
            }
        }
        for(int i = current; i<nums.size(); i++){
            nums[i]=0;
        }
        
    }
};