class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size(), ans = 0;
        for(int i = 1; i<n-1; ++i){
            int leftG = 0, leftS = 0, rightG = 0, rightS = 0;
            for(int j = 0; j<n; ++j){
                if(j<i){
                    if(rating[i]>rating[j]){
                        leftS++;
                    }else{
                        leftG++;
                    }
                }if(i<j){
                    if(rating[i]>rating[j]){
                        rightS++;
                    }else{
                        rightG++;
                    }
                }
            }
            ans += leftS*rightG + leftG*rightS;
        }
        return ans;
    }
};
