class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0){
                count++;
            }
        }
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        for(int i = 0; i<count; i++){
            nums.push_back(0);
        }
        
    }
};