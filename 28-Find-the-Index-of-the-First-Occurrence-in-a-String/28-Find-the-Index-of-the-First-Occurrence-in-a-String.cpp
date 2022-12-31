class Solution {
public:
    vector<int> table(string needle){
        int size = needle.size();
        vector<int> hTable(size, 0);
        int j = 0;
        for(int i = 1; i<size; ++i){
            while(j>0 && needle[i]!=needle[j]){
                j = hTable[j-1];
            }
            if(needle[i]==needle[j]){
                hTable[i] = ++j;
            }
        }
        return hTable;
    }
    int strStr(string haystack, string needle) {
        vector<int> hTable = table(needle);
        int hSize = haystack.size();
        int nSize = needle.size();
        int j = 0, ans = -1;
        for(int i = 0; i<hSize; ++i){
            while(j>0 && haystack[i]!=needle[j]){
                j = hTable[j-1];
            }
            if(haystack[i]==needle[j]){
                if(j == nSize - 1){
                    ans = i - nSize + 1;
                    break;
                }else{
                    j++;
                }
            }
        }
        return ans;   
    }
};
