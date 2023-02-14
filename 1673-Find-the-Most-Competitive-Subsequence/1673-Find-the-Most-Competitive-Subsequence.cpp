class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> v;
        int n = nums.size()-1;
        v.push_back(nums[0]);
        for(int i = 1; i<nums.size(); ++i){
            while(!v.empty() && v.back()>nums[i] && (v.size() + n - i)>=k){
                v.pop_back();
            }
            if(v.size()<k) v.push_back(nums[i]);
        }    
        return v;
    }
};
