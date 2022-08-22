class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> v(size(temperatures));
        stack<int> s;
        for(int i = 0; i<temperatures.size(); i++){
            while(s.size() && temperatures[i] > temperatures[s.top()]){
                v[s.top()]= i - s.top();
                s.pop();
            }
            s.push(i);
        }
        
        return v;
    }
};