class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {
        List<Integer> ans = new ArrayList<Integer>();
        int sum = 0, carry = 0, n = num.length-1;
        for(int i = n; i>=0; --i){
            sum = num[i] + k%10 + carry;
            if(sum >= 10) {
                ans.add(0, sum%10);
                carry = sum/10;
            }else{
                ans.add(0, sum);
                carry = 0;
            }
            k = k/10;
        }
        k += carry;
        while(k>0){
            ans.add(0, k%10);
            k /= 10;
        }
        return ans;
    }
}
