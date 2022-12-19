class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        String combined = s1+ " " + s2;
        String[] splited = combined.split(" ");
        Map<String, Integer> m = new HashMap<>();
        List<String> ans = new ArrayList<>();

        for(String it: splited){
            m.put(it, m.getOrDefault(it, 0) + 1);
        }
        
        for(String key: m.keySet()){
            if(m.get(key)==1){
                ans.add(key);
            }
        }
        return ans.toArray(new String[0]);
    }
}
