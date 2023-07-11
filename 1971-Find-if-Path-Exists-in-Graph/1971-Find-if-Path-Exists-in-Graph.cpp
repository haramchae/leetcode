class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> vm;
        unordered_map<int, bool> bm;
        for(auto it: edges){
            vm[it[0]].push_back(it[1]);
            vm[it[1]].push_back(it[0]);
            bm[it[0]] = false;
            bm[it[1]] = false;
        }
        queue<int> q;
        q.push(source);
        bm[source] = true;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            vector<int> v = vm[temp];
            for(auto num: v){
                if(bm[num]==true) continue;
                else{
                    q.push(num);
                    bm[num] = true;
                }
            }    
        }
        return bm[destination];
    }
};
