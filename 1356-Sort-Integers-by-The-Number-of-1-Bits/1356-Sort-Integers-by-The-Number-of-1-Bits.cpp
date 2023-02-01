class Solution {
public:
    static bool compare(int a, int b){
        bitset<32> bit1(a);
        bitset<32> bit2(b);
        if(bit1.count()!=bit2.count()){
            return bit1.count() < bit2.count();
        }
        return a < b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};
