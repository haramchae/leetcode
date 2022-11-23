class Solution {
    public String maximumTime(String time) {
        char[] ans = time.toCharArray();
        if(ans[0]=='?'){
            ans[0] = (ans[1]<='3' || ans[1]=='?') ? '2' : '1';
        }
        if(ans[1]=='?'){
            ans[1] = ans[0] == '2' ? '3' : '9';
        }
        if(ans[3]=='?'){
            ans[3] = '5';
        }
        if(ans[4]=='?'){
            ans[4] = '9';
        }
        return new String(ans);
    }
}
