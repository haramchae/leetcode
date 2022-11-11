class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> m;
        for(int i = 0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        int max = -1;
        for(auto it: m){
            if(it.first == it.second){
                max = it.first;
            }
        }
        return max;
    }
};
