class Solution {
public:
    int ans = 0;
    
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        if(ruleKey == "type"){
            helper(items, ruleValue, 0);
        }else if(ruleKey == "color"){
            helper(items, ruleValue, 1);
        }else{
            helper(items, ruleValue, 2);
        }
        
        return ans;
    }
    
    void helper(vector<vector<string>> items, string ruleValue, int index){
        for(int i = 0; i<items.size(); i++){
            if(items[i][index]==ruleValue){
                ans++;
            }
        }
    }
    
};