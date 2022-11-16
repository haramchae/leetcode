class Solution {
    public String thousandSeparator(int n) {
        String str = Integer.toString(n);
        int size = str.length();
        if(size<4) return str;
        
        for(int i = size - 3; i > 0; i-=3){
            str = new StringBuffer(str).insert(i, ".").toString();
        }
        return str;
    }
}
