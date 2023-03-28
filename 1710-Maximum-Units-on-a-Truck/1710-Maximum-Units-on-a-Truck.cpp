bool sort2D(vector<int>& v1, vector<int>& v2){
    return v1[1]>v2[1];
}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans = 0;
        sort(boxTypes.begin(), boxTypes.end(), sort2D);
        for(auto box: boxTypes){
            if(truckSize-box[0]>=0){
                ans += box[0]*box[1];
                truckSize -= box[0];
            }else{
                ans += truckSize * box[1];
                break;
            }
        }
        return ans;
    }
};
