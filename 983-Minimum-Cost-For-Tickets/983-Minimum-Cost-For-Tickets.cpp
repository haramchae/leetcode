class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        unordered_set<int> sDays(days.begin(), days.end());
        int lastDay = days[days.size()-1];
        vector<int> dp(lastDay+1);
        dp[0] = 0;
        for(int i = 1; i<=lastDay; ++i){
            if(!sDays.count(i)){
                dp[i] = dp[i-1];
            }else{
                dp[i] = min({(dp[i-1] + costs[0]), 
                        (dp[max(i-7, 0)] + costs[1]), 
                        (dp[max(i-30, 0)] + costs[2])});
            }
        }
        return dp[lastDay];
    }
};
