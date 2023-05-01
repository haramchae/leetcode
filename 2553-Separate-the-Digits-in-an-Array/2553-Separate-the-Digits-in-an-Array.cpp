class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for(int i = nums.size()-1; i>=0; --i){
            int num = nums[i];
            while(num>=10){
                v.insert(v.begin(), num%10);
                num /= 10;
            }
            
            v.insert(v.begin(), num);
        }
        return v;
    }
};
