// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1, end = n, bad = 1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isBadVersion(mid) == false){
                start = mid + 1;
            }else{
                end = mid - 1;
                bad = mid;
            }
        }
        return bad;
    }
};