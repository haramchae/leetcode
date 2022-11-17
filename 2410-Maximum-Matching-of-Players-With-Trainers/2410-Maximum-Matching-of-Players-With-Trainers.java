class Solution {
    public int matchPlayersAndTrainers(int[] players, int[] trainers) {
        Arrays.sort(players);
        Arrays.sort(trainers);
        int count = 0, i = 0, j = 0;
        int pLength = players.length, tLength = trainers.length;
        while(i < pLength && j < tLength){
            if(players[i] <= trainers[j]){
                count ++;
                i++;
                j++;
            }else{
                j++;
            }
        }

        return count;
    }
}
