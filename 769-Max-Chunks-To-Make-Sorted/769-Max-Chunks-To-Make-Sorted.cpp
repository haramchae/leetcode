class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count = 0, maxNum = INT_MIN , size = arr.size();
        for(int i = 0; i<size; i++){
            maxNum = max(arr[i], maxNum);
            if(maxNum == i) count++;
        }
        return count;
    }
};
