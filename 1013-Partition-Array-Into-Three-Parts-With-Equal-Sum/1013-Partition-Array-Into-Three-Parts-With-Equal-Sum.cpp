class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = 0;
        for(auto num: arr) total += num;
        if(total % 3 != 0) return false;
        int target = total / 3;
        int curSum = 0, count = 0;
        for(int i = 0; i < arr.size()-1; ++i){
            curSum += arr[i];
            if(curSum == target){
                count++;
                curSum = 0;
            }
            if(count == 2) return true;
        }
        return false;
    }
};
