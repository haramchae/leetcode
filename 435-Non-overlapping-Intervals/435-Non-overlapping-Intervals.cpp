bool compareValue(vector<int> &a, vector<int> &b){
        return a[1]<b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans = 0;
        sort(intervals.begin(), intervals.end(), compareValue);
        int prev = intervals[0][1];
        for(int i = 1; i<intervals.size(); ++i){
            if(prev>intervals[i][0]){
                ans++;
            }else{
                prev = intervals[i][1];
            }
        }
        return ans;
    }
};
