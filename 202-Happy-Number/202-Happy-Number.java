class Solution {
    public boolean isHappy(int n) {
        HashSet<Integer> s = new HashSet<>();
        while(n!=1){
            if(s.contains(n)){
                return false;
            }else{
                s.add(n);
            }
            int sum = 0;
            while(n!=0){
                sum += (n%10) * (n%10);
                n = n / 10;
            }
            n = sum;
        }
        return true;
    }
}
