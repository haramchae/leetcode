class Solution {
    public List<List<Integer>> mergeSimilarItems(int[][] items1, int[][] items2) {
        Map<Integer, Integer> map = new TreeMap<Integer, Integer>();
        for(var it: items1){
            map.put(it[0],it[1]);
        }
        for(var it: items2){
            map.putIfAbsent(it[0], 0);
            map.put(it[0], map.get(it[0]) + it[1]);
        }
        List<List<Integer>> ans = new ArrayList<>();
        for(var i :map.keySet()){
            List<Integer> temp = new ArrayList<>(); 
            temp.add(i);
            temp.add(map.get(i));
            ans.add(temp);
        }
        return ans;
    }
}
