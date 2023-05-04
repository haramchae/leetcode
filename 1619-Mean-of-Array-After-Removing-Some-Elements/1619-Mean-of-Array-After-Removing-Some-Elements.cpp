class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        double ans = 0;
        int n = arr.size(), p = (n*5)/100;
        for(int i = p; i<n-p; ++i) ans += arr[i];
        ans = ans / (n-(p*2));
        return ans;
    }
};
