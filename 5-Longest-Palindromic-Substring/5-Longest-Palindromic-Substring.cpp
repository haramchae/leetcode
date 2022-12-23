class Solution {
public:
    string longestPalindrome(string s) {
        string temp = "#";
        for(auto it: s){
            temp += it;
            temp += "#";
        }
        int size = temp.size();
        int r = 0, curP = 0, maxP = 0, maxLen = 0;
        vector<int> p(size, 0);

        for(int i = 0; i<size; ++i){
            if(r>i) p[i] = min(r-i, p[2*curP-i]);
            else p[i] = 0;
            while(i-p[i]-1>=0 && i + p[i] + 1 < size && temp[i-p[i]-1] == temp[i+p[i]+1]){
                p[i]++;
            }
            if(r<i+p[i]){
                r = i+p[i];
                curP = i;
                
            }
            if(maxLen<p[i]){
                maxLen = p[i];
                maxP = i;
            }
        }
        return s.substr((maxP-maxLen)/2, maxLen);
    }
};
