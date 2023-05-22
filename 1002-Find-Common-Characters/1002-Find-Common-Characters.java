class Solution {
    public List<String> commonChars(String[] words) {
        int[] arry =  new int[26];
        List<String> ans = new ArrayList<>();
        for(int i = 0; i<words[0].length(); i++){
            arry[words[0].charAt(i) - 'a']++;
        }

        for(int j = 1; j < words.length; j++){
            int[] arry2 = new int[26];
            for(int k = 0; k < words[j].length(); k++){
                arry2[words[j].charAt(k) - 'a']++;
            }
            for(int l = 0; l < 26; l++){
                if(arry[l]>arry2[l]) arry[l] = arry2[l];
            }
        }
        for(int i = 0; i<26; i++){
            for(int j = 0; j<arry[i]; j++){
                ans.add(Character.toString((char) ('a'+i)));
            }
        }
        return ans;
    }
}
