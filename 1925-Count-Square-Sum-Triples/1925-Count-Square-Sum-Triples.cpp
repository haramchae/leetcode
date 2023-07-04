class Solution {
public:
    int countTriples(int n) {
        set<int> s;
        int ans = 0;
        for(int i = 1; i<n+1; ++i){
            s.insert(i*i);
        }
        for(int i = 1; i<n; ++i){
            for(int j = i+1; j<n+1; ++j){ 
                if(s.count(i*i+j*j)) ans+=2;
            }
        }
        return ans;
    }
};
