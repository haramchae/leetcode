class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int arry1[1001] = {0};
        int arry2[1001] = {0};
        vector<int> ans;
        for(auto it: nums1) arry1[it]++;
        for(auto it: nums2) arry2[it]++;
        for(int i = 0; i<1001; i++){
            if(arry1[i]!=0 && arry2[i]!=0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
