class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int> m;
        vector<string> ans;
        int min = INT_MAX; 
        for(int i = 0; i<list1.size(); i++){
            m[list1[i]] = i;
        }
        
        for(int j = 0; j<list2.size(); j++){
            if(m.find(list2[j])!=m.end()){
                if(m[list2[j]]+j < min){
                    ans.clear();
                    ans.push_back(list2[j]);
                    min = m[list2[j]] + j;
                }else if(m[list2[j]]+j == min){
                    ans.push_back(list2[j]);
                }
            }
        }
        
        return ans;
    }
};