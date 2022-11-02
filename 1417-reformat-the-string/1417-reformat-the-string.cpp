class Solution {
public:
    string reformat(string s) {
        int size = s.size();
        string ap, nm;
        for(int i = 0; i<size; i++){
            if(60<s[i]){
                ap.push_back(s[i]);
            }
            else{
                nm.push_back(s[i]);
            }
        }
        if(abs(int(ap.size()-nm.size()))>1)
            return "";
        
        bool check = ap.size()>nm.size();
        for(int i = 0, j = 0, k = 0; i<size; i++){
            if(check){
                s[i]=ap[j++];
            }else{
                s[i]=nm[k++];
            }
            check=!check;
        }
        
        return s;
    }
};