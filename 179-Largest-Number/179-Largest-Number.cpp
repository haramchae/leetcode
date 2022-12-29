class Solution {
public:
    struct comp{
        bool operator()(int a, int b){
            string first = to_string(a) + to_string(b);
            string second = to_string(b) + to_string(a);
            return first>second;
        }
    } comp;
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comp);
        if(nums[0]== 0) return "0";
        string ans = "";
        for(auto it: nums){
            ans += to_string(it);
        }
        return ans;
    }
};
