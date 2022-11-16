class Solution {
    public long waysToBuyPensPencils(int total, int cost1, int cost2) {
        if(total<cost1 && total<cost2) return 1;
        long ans;
        if(cost1>cost2){
            ans = checker(total, cost1, cost2); 
        }else{  
            ans = checker(total, cost2, cost1);
        }
        return ans;
    }

    long checker(int total, int big, int small){
        long ans = 0;
        int b = 0;
        while(b<=total){
            int remain = total - b;
            ans += (remain/small + 1);
            b+=big;
        }
        return ans;
    }
}
