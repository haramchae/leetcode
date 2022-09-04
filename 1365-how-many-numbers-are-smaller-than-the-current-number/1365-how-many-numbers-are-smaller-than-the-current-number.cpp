class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int temp = 0;
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            temp = 0;
            for(int j = 0; j<nums.size(); j++){
                if(nums[i]>nums[j]){
                    temp++;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};