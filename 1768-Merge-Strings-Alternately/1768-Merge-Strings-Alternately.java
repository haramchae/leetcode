class Solution {
    public String mergeAlternately(String word1, String word2) { 
        int minIndex = Math.min(word1.length(), word2.length());
        String ans = "";
        for(int i = 0; i<minIndex; i++){
            ans += word1.charAt(i);
            ans += word2.charAt(i);
        }
        if(word1.length() == word2.length()) return ans;
        else if (word1.length() > word2.length()){
            ans+= word1.substring(minIndex, word1.length());
        }else{
            ans+= word2.substring(minIndex, word2.length());
        }
        return ans;
    }
}
