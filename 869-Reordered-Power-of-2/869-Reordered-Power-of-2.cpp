class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int> curV = count(n);
        for(int i = 0; i<30; ++i){
            if(curV == count(1<<i)) return true;
        }
        return false;
    }

    vector<int> count(int n){
        vector<int> v(10);
        while(n){
            v[n%10]++;
            n/=10;
        }
        return v;
    }
};
