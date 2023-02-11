class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int lastTime = neededTime[0], ans = 0;
        char last = colors[0];
        for(int i = 1; i<colors.size(); ++i){
            if(last == colors[i]){
                if(lastTime > neededTime[i]){
                    ans+=neededTime[i];
                }else{
                    ans+=lastTime;
                    lastTime = neededTime[i];
                }
            }else{
                last = colors[i];
                lastTime = neededTime[i];
            }
        }
        return ans;
    }
};
