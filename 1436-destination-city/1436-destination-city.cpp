class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> um;
        for(auto it: paths){
            um[it[0]]=it[1];
        }
        string destination = paths[0][0];
        while(um.count(destination)){
            destination = um[destination];
        }
        
        return destination;
        
    }
};