class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0, n = name.size(), m = typed.size();
        while(j<m){
            if(i<n && name[i]==typed[j]){
                i++;
                j++;
            }else if( i > 0 && name[i-1]==typed[j]){
               j++;
            }else{
                return false;
            }
        }
        return i == n ? true : false;
    }
};
