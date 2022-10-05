class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double temp = accumulate(nums.begin(), nums.begin()+k, double(0));
        double maxAns = temp;
        for(int i = k; i<nums.size(); i++){
            temp += nums[i]-nums[i-k];
            maxAns = max(maxAns, temp);
            
        }
        return maxAns/k;
    }
};