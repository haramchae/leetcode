class Solution {
    public int[] fairCandySwap(int[] aliceSizes, int[] bobSizes) {
        int aSum = IntStream.of(aliceSizes).sum();
        int bSum = IntStream.of(bobSizes).sum();
        int diff = (aSum-bSum)/2;
        for(int i = 0; i<aliceSizes.length; ++i){
            for(int j = 0; j<bobSizes.length; ++j){
                if(aliceSizes[i]-bobSizes[j]==diff){
                    return new int[]{aliceSizes[i],bobSizes[j]};
                }
            }
        }
        return new int[]{0,0};
    }
}
