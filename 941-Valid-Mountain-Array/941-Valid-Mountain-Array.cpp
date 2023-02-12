class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        int check = 0, checkIn = 0;
        for(int i = 1; i<arr.size(); ++i){
            if(arr[i]==arr[i-1]) return false;
            if(check == 0){
                if(arr[i]>arr[i-1]) checkIn = 1;
                if(arr[i]<arr[i-1]) check = 1;
            }else{
                if(arr[i]>arr[i-1]) return false;
            }
        }
        return check == 1 && checkIn == 1 ? true : false;
    }
};

/****
two pointers
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        int l = 0;
        int r = arr.size() - 1;
        while(l + 1 < arr.size() - 1 && arr[l] < arr[l + 1]) l++;
        while(r - 1 > 0 && arr[r] < arr[r - 1]) r--;
        return l == r;
    }
};
*****/
