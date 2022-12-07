class Solution {
public:
    int specialArray(vector<int>& nums) {
        int size = nums.size();
        for(int i = 1; i<size+1; ++i){
            int cnt = 0;
            for(int j = 0; j<size; ++j){
                if(nums[j]>=i) cnt++;
            }
            if(i==cnt) return i;
        }
        return -1;
    }
};
