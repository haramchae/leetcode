class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int start = 0, last = 0, tCount = 0, fCount = 0, ans = 0;
        for(; last<answerKey.size(); ++last){
            if(answerKey[last]=='T'){
                tCount++;
            }else{
                fCount++;
            }
            if(min(tCount, fCount)<=k) ans = max(ans, last - start + 1);
            else{
                while(min(tCount, fCount)>k){
                    if(answerKey[start]=='T'){
                        tCount--;
                    }else{
                        fCount--;
                    }
                    start++;
                }
            }
        }
        return ans;
    }
};
