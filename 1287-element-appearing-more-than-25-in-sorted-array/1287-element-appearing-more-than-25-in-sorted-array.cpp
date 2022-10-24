class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size();
        int div = size / 4;
        for(int i = 0; i + div < size; i++){
            if(arr[i] == arr[i+div]){
                return arr[i];
            }
        }
        return 0;
    }
};