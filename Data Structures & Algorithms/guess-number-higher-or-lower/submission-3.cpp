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
       int start=1,finish=n;
       while(start<=finish)
       {
        int mid=start+(finish-start)/2;
        if(guess(mid)==0)
        return mid;
        else if(guess(mid)==-1)
        mid=finish-1;
        else
        mid=start+1;
       }
       return -1;
    }
};