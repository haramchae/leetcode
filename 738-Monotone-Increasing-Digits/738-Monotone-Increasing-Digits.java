class Solution {
    public int monotoneIncreasingDigits(int n) {
        char[] c = String.valueOf(n).toCharArray();
        int len = c.length, check = c.length;
        for(int i = len-1; i>0; --i){
            if(c[i]<c[i-1]){
                check = i;
                c[i-1]--;
            }
        }
        for(int i = check; i<len; ++i){
            c[i]='9';
        }
        return Integer.parseInt(new String(c));
    }
}
