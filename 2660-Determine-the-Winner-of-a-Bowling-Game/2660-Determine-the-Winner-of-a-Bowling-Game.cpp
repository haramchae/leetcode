class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int first = 0, second = 0;
        for(int i = 0; i<player1.size(); ++i){
            if((i-2>=0 && player1[i-2] == 10) || (i-1>=0 && player1[i-1] == 10)){
                first += player1[i]*2;
            }else{
                first += player1[i];
            }

            if((i-2>=0 && player2[i-2] == 10) || (i-1>=0 && player2[i-1] == 10)){
                second += player2[i]*2;
            }else{
                second += player2[i];
            }
        }
        if(first == second) return 0;
        return first>second ? 1 : 2;
    }
};
