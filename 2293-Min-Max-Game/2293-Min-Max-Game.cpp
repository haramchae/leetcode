class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int size = nums.size();
        while(size>1){
            nums = check(nums);
            size = nums.size();
        }
        return nums[0];
    }

    vector<int> check(vector<int> v){
        int num = 1;
        vector<int> temp;
        for(int i = 0 ; i<v.size()/2; i++){
            if(num == 1){
                temp.push_back(min(v[2*i],v[2*i+1]));
                num = 0;
            }else{
                temp.push_back(max(v[2*i],v[2*i+1]));
                num = 1;
            }
        }
        return temp;
    }
};
