class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int row[3] = {0};
        int col[3] = {0}; 
        int x = 0, y = 0, diag = 0, antiDiag = 0;
        for(int i = 0; i<moves.size(); i++){
            x = moves[i][0];
            y = moves[i][1];
            if(i%2==0){
                row[x]++;
                col[y]++;
                if(x==y) diag++;
                if(x==2-y) antiDiag++;
            }else{
                row[x]--;
                col[y]--;
                if(x==y) diag--;
                if(x==2-y) antiDiag--;
            }
            
            if(row[x]==3||col[y]==3||diag==3||antiDiag==3) return "A";
            if(row[x]==-3||col[y]==-3||diag==-3||antiDiag==-3) return "B";
        }
        cout<<row[0];
        if(moves.size()<9) return "Pending";
       
        return "Draw";
    }
};