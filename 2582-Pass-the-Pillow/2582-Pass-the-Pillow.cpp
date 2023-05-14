class Solution {
public:
    int passThePillow(int n, int time) {
        int cycle = (n-1)*2;
        if(time>cycle) time %= cycle;
        if(cycle/2>time) return time + 1;
        return 1 + cycle - time;
    }
};
