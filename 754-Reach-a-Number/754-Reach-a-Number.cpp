class Solution {
public:
    int reachNumber(int target) {
        if(target<0) target = -target;
        int sum = 0, ans = 0;
        while(true){
            ans++;
            sum += ans;
            if(sum==target){
                return ans;
            }else if(sum>target && (sum-target)%2==0){
                return ans;
            }
        }
    }
};
