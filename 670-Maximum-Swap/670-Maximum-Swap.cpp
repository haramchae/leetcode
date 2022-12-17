class Solution {
public:
    int maximumSwap(int num) {
        if(num<10) return num;
        auto s = to_string(num);
        for(int i = 0; i < s.size(); ++i){
            auto p = max_element(s.rbegin(), s.rend() - i);
            cout<<*p<<" ";
            if(s[i] != *p){
                swap(s[i], *p);
                break;
            }
        }
        return stoi(s);
    }
};
