class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int size = encoded.size();
        vector<int> arr(size+1);
        arr[0]=first;
        for(int i = 0; i<size; i++){
            arr[i+1] = encoded[i]^arr[i];
        }
        return arr;
    }
};