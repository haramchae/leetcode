class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        int left, index = 0;
        for(auto it: chalk){
            sum += it;
        }
        left = k % sum;
        for(; index<chalk.size(); ++index){
            if(chalk[index]<=left){
                left-=chalk[index];
            }else{
                break;
            }
        }
        return index;
    }
};
