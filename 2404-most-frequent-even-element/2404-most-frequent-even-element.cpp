class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        int ans = INT_MAX, nMax = -1;
        for(auto it: nums){
            if(it%2==0) m[it]++;
        }
        for(auto it: m){
            if(it.second>nMax){
                nMax = it.second;
                ans = it.first;
            }else if(it.second==nMax) nMax = it.second;
        }
        
        return ans == INT_MAX?-1:ans;
    }
};