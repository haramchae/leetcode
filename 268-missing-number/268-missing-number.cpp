class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        vector<int> v(size+1);
        for(int i = 0; i<size; i++){
            v[nums[i]]=1;
        }
        
        return find(v.begin(), v.end(), 0) - v.begin();
    }
};