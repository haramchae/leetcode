class Solution {
    public int largestSumAfterKNegations(int[] nums, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        int sum = 0;
        for(int it: nums) pq.add(it);
        while(k-->0) pq.add(-pq.poll());
        while(pq.size()>0) sum+=pq.poll();
        return sum;
    }
}
