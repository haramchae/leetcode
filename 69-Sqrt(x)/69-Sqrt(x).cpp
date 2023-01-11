class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x, ans = 0;
        if(x==0) return 0;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(mid == 0) return 1;
            if(mid == x/mid){
                ans = mid;
                break;
            }
            if(x/mid < mid){
                r = mid-1;
            }else{
                l = mid+1;
                ans = mid;
            }
        }
        return ans;
    }
};
