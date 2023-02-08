class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int mod = 1000000007;
        long count = 1;
        int ans = 1;
        sort(arr.begin(), arr.end());
        map<int, long> mp;
        mp[arr[0]] = 1;
        for(int i = 1; i<arr.size(); ++i){
            count = 1;
            for(auto it: mp){
                if(arr[i]%it.first == 0 && mp.find(arr[i]/it.first)!=mp.end()){
                    count += (mp[it.first] * mp[arr[i]/it.first]) % mod;
                }
            }
            mp[arr[i]] = count;
            ans = (ans+mp[arr[i]])%mod;
        }
        return ans%mod;
    }
};
