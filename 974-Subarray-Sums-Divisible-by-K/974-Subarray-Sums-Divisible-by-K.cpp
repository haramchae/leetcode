class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> count(k, 0);
        int pre = 0;
        for(auto it: nums){
            pre += (it%k+k)%k;
            count[pre%k]++;
        }
        int result = count[0];
        for(auto it: count){
            result += (it*(it-1))/2;
        }

        return result;
    }
};
