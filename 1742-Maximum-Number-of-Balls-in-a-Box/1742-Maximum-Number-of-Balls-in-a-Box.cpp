class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int arr[46] = {};
        for(int i = lowLimit; i<=highLimit; i++){
            int num = 0, n = i;
            while(n>0){
                num += n % 10;
                n /= 10;
            }
            arr[num]++;
        }
        return *max_element(begin(arr), end(arr));
    }
};
