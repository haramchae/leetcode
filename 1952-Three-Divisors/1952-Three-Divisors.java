class Solution {
    public boolean isThree(int n) {
        if(n<4) return false;
        int sqrtNum = (int)Math.sqrt(n);
        if(sqrtNum*sqrtNum!=n) return false;
        for(int i = 2; i<sqrtNum; ++i){
            if(sqrtNum%i==0) return false;
        }
        return true;
    }
}
