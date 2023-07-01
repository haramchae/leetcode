class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> v;
        int target = INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i  = 1; i<arr.size(); i++){
            target = min(target, arr[i]-arr[i-1]);
        }
        for(int i  = 1; i<arr.size(); i++){
            if(arr[i]-arr[i-1] == target){
                v.push_back({arr[i-1],arr[i]});
            }
        }
        return v;
    }
};
