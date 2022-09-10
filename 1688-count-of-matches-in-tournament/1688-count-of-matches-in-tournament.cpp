class Solution {
public:
    int numberOfMatches(int n) {
        int max = 0;
        while(true){
            if(n%2 == 0){
                max += n/2;
                n = n/2;
            }else{
                max += (n-1)/2;
                n = (n-1)/2 + 1;
            }
            if(n==1){
                break;
            }
        }
        
        return max;
    }
};