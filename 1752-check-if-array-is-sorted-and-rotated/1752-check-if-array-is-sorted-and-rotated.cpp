class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        for(int i = 0; i<nums.size(); i++){
            if(check2(sorted,nums,i)){
                return true;
            }
        }
        return false;
    }
    
    bool check2(vector<int>& nums, vector<int> sorted, int x){
        for(int i = 0; i<nums.size(); i++){
            if(sorted[i] != nums[(i+x)%sorted.size()]) return false;
        }
        return true;
    }
};