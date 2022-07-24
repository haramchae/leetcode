class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> UM;
        for(int i = 0; i<magazine.size(); i++){
            UM[magazine[i]]++;
        }
        for(int j = 0; j<ransomNote.size(); j++){
            if(UM[ransomNote[j]]>0){
                UM[ransomNote[j]]--;
            }else{
                return false;
            }
        }
        return true;
    }
};