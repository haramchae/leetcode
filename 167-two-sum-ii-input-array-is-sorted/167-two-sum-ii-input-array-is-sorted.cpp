class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int start = 0, end = numbers.size() - 1;
        while(start < end){
            if(numbers[start] + numbers[end] == target){
                ans = {start + 1, end + 1};
                break;
            }else if(numbers[start] + numbers[end] < target){
                start++;
            }else{
                end--;
            }
        }
        return ans;
       
    }
};