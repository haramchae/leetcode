/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n;
        while(right>=left){
            int middle = left + (right-left)/2;
            int temp = guess(middle);
            if(temp==-1) right = middle-1;
            else if(temp==1) left = middle+1;
            else return middle;
        }
        return -1;
    }
};
