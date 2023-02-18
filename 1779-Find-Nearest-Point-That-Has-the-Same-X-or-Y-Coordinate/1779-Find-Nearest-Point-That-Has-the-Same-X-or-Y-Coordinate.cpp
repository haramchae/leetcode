class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = -1, small = INT_MAX;
        for(int i = 0; i<points.size(); ++i){
            if(points[i][0]==x || points[i][1]==y){
                int mDis = abs(points[i][0]-x) + abs(points[i][1]-y);
                if(mDis<small){
                    ans = i;
                    small = mDis;
                }
            }
        }
        return ans;
    }
};
