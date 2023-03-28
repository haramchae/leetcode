class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int left = 0, right = nums.size()-1;
        while(left<=right){
            if(left==right){
                ans+=nums[left];
                break;
            }else{
                string num = to_string(nums[left]) + to_string(nums[right]);
                ans+=stoi(num);
            }
            left++;
            right--;
        }
        return ans;
    }
};
