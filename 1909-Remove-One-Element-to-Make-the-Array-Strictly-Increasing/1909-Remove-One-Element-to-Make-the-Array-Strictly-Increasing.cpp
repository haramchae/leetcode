class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        for(int i = 0; i<nums.size(); ++i){
            vector<int> temp = nums;
            temp.erase(temp.begin()+i);
            if(checkV(temp)) return true;
        }
        return false;
    }

    bool checkV(vector<int> v){
        for(int i = 1; i<v.size(); ++i){
            if(v[i-1]>=v[i]) return false;
        }
        return true;
    }
};
