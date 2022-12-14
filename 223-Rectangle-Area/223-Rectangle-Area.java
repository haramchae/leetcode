class Solution {
    public int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int totalRec = ((ax2-ax1) * (ay2-ay1)) + ((bx2-bx1) * (by2-by1));
        if(ax2<=bx1 || ax1>=bx2 || by1>=ay2 || ay1>=by2) return totalRec;
        int overlapRec = (Math.min(ax2,bx2) - Math.max(ax1,bx1)) * (Math.min(ay2,by2) - Math.max(ay1,by1));
        return totalRec - overlapRec;
    }
}
