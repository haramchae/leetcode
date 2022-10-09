class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int* m = new int[nums.size()+1]();
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(int j = 1; j<nums.size()+1; j++){
            if(m[j]==2) ans.insert(ans.begin(), j);
            if(m[j]==0) ans.push_back(j); 
        }
      
        return ans;
    }
};