class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<float> s;
        int i = 0, j = nums.size()-1;
        while(j>i){
            float sum = nums[i++] + nums[j--];
            s.insert(sum/float(2));
        }
        return s.size();
    }
};
