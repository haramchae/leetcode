class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size()<3) return 0;
        int start = 0, last = 0, flag = 0, ans = 0;
        for(int i = 1; i<arr.size(); ++i){
            if(arr[i]>arr[i-1]){
                if(flag == 1){
                    ans = max(ans, last-start+1);
                    flag = 0;
                    start = i - 1;     
                }
                last = i;
            }else if(arr[i]<arr[i-1]){
                if(start == last){
                    start = i;
                    last = i;
                }else{
                    flag = 1;
                    last = i;
                }
            }else{
                if(flag == 1){
                    ans = max(ans, last-start+1);
                    flag = 0;
                }
                start = i;
                last = i;
            }
        }
        if(last>start && flag == 1){
            ans = max(ans, last-start+1);
        }
        return ans;
    }
};
