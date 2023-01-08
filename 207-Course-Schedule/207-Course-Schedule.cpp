class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> graph[numCourses];
        vector<int> visited(numCourses, 0);
        for(auto it: prerequisites){
            graph[it[1]].push_back(it[0]);
        }
        for(int i = 0; i<numCourses; ++i){
            if(dfs(graph, visited, i)) return false;
        }
        return true;
    }

    bool dfs(vector<int> graph[], vector<int> &visited, int index){
        if(visited[index]==1) return true;
        if(visited[index]==0){
            visited[index]=1;
            for(auto it: graph[index]){
                if(dfs(graph, visited, it)) return true;
            }
        }
        visited[index]=2;
        return false;
    }
};
