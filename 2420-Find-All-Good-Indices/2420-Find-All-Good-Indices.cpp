class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> IV(n, 1);
        vector<int> DV(n, 1);
        vector<int> ans;
        for(int i = 1; i<n; ++i){
            if(nums[i]>nums[i-1]){
                IV[i] = IV[i-1] + 1;
            }else if(nums[i]<nums[i-1]){
                DV[i] = DV[i-1] + 1;
            }else{
                IV[i] = IV[i-1] + 1;
                DV[i] = DV[i-1] + 1;
            }
        }
        for(int i = k; i<n-k; i++){
            if(DV[i-1]>=k && IV[i+k]>=k){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
