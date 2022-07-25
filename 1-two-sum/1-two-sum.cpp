class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int first, second, flag = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            first = i;
            for(int j = i + 1; j < nums.size(); j++){               
                if(nums[i] + nums[j] == target){
                    second = j;
                    flag = 1;
                }
            }
            if(flag == 1){
                break;
            }
        }
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
};