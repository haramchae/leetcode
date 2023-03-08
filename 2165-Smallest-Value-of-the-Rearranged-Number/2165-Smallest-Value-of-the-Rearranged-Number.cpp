class Solution {
public:
    long long smallestNumber(long long num) {
        if(num == 0) return 0;
        string str = to_string(num);
        if(num>0){
            sort(str.begin(), str.end());
            if(str[0]=='0'){
                int i = 0;
                while(str[i]=='0'){
                    i++;
                }
                swap(str[0], str[i]);
            }
        }
        if(num<0){
            string str = to_string(-num);
            sort(str.rbegin(), str.rend());
            return -stoll(str);
        }
        return stoll(str);
    }
};
