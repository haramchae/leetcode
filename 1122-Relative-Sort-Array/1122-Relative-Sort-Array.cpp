class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;
        vector<int> v;
        for(auto num: arr1) m[num]++;
        for(auto num: arr2){
            while(m[num]>0){
                v.push_back(num);
                m[num]--;
            }
        }
        for(auto it: m){
            while(it.second>0){
                v.push_back(it.first);
                it.second--;
            }
        }
        return v;
    }
};
