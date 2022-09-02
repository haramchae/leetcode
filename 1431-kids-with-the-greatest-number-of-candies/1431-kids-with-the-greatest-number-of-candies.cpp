class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxVal = *max_element(candies.begin(), candies.end());
        for(auto it: candies){
            if(it + extraCandies >= maxVal) ans.push_back(true);
            else ans.push_back(false);            
        }
        return ans;
    }
};