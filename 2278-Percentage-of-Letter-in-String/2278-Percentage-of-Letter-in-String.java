class Solution {
    public int percentageLetter(String s, char letter) {
        return ((s.length() - s.replace(String.valueOf(letter), "").length())*100)/s.length();

    }
}
