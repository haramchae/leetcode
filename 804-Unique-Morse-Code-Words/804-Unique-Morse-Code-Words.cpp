class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
	    vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....",
                            "..",".---","-.-",".-..","--","-.","---",".--.",
                            "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};   
        unordered_map<string, int> um;
        for(int i = 0; i<words.size(); i++){
            string s;
            for(int j = 0; j<words[i].size(); ++j){
                s += v[words[i][j] - 'a'];
            }
            um[s] = 1;
        }     
        return um.size();
    }
};
