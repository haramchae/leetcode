class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> list = new ArrayList<>();
        for(int i = left; i<=right; ++i){
            if(checker(i)) list.add(i);
        }
        return list;
    }

    boolean checker(int num){
        for(int n = num; n>0; n/=10){
            int temp = n%10;
            if(temp == 0|| num%temp != 0) return false;
        }
        return true;
    }
}
