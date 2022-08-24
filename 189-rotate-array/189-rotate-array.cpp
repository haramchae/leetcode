class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() == 1){
            return;
        }
        k %= nums.size();
        vector<int> temp(nums.size(), 0);
        copy(nums.end()-k, nums.end(), temp.begin());
        copy(nums.begin(), nums.end()-k, temp.begin()+k);
        copy(temp.begin(), temp.end(), nums.begin());
    }
};