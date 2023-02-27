class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> time;
        int ans = INT_MAX;
        for(auto point: timePoints){
            time.push_back(stoi(point.substr(0,2))*60 + stoi(point.substr(3,2)));
        }
        sort(time.begin(), time.end());
        for(int i = 1; i<time.size(); ++i){
            ans = min(ans, time[i]-time[i-1]);
        }
        ans = min(ans, time[0]-time[time.size()-1]+24*60);
        return ans;
    }

    
};
