class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count = 0, flag = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==1){
                if(flag == 0){
                    flag = 1;
                }else{
                    flag = 1;
                    if(count < k) return false;
                    count = 0;
                }
            }else{
                count++;
            }
        }
        return true;
    }
};