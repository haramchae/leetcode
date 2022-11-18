class Solution {
    public void duplicateZeros(int[] arr) {
        ArrayList<Integer> arrList = new ArrayList<>();
        for(int i = 0; i<arr.length; i++){
            arrList.add(arr[i]);
            if(arr[i]==0) arrList.add(arr[i]);
        }
        for(int i = 0; i<arr.length; i++){
            arr[i] = arrList.get(i);
        }
    }
}
