class Solution {
    public boolean isPathCrossing(String path) {
        int x = 0, y = 0;
        Set<String> s = new HashSet<>();
        s.add("0,0");
        for(int i = 0; i<path.length(); ++i){
            if(path.charAt(i)=='N'){
                y++;
            }else if(path.charAt(i)=='S'){
                y--;
            }else if(path.charAt(i)=='E'){
                x++;
            }else{
                x--;
            }
            String temp = x + "," + y;
            if(s.contains(temp)) return true;
            else s.add(temp);
        }
        return false;
    }
}
