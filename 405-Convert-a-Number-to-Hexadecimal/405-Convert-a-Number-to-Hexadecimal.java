class Solution {
    public String toHex(int num) {
        if(num == 0) return "0";
        char[] hex = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        String ans = "";
        while(num!=0){
            ans = hex[num&15] + ans;
            num = num>>>4;
        }
        return ans;
        
    }


    
}
