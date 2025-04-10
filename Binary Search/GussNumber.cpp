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
    int guessNumber(int n) 
    {
        long int mid =0;
        long int low =1;
        long int high = n;
        int result =-1;
        int g = 0;



        while(low <= high)
        {
            


            mid = (low +high) /2;
            g=guess(mid) ;
            if(g == 0)
            {

                result = mid;
                break; 

            }
            else if(g == 1)
            {
                low = mid +1;
            }
            else
            {
                
                high = mid -1;
            }

        }

        if(result ==-1)
        {
            result = low  ;
        }




        return result ;
        
    }
};
