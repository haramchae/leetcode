class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n, 1);
        vector<int> right(n, 1);
        vector<int> ans;
        for(int i = 1; i<n; i++){
            left[i] = left[i-1] * nums[i-1];
        }
        for(int j = n-2; j>=0; j--){
            right[j] = right[j+1] * nums[j+1];
        }
        for(int k = 0; k < n; k++){
            ans.push_back(left[k] * right[k]);
        }
        return ans;
    }
};