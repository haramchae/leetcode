class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> us;
        vector<int> v;
        for(int num: nums){
            us.insert(num);
        }
        for(int i = 1; i<nums.size()+1; ++i){
            if(us.find(i) == us.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};
