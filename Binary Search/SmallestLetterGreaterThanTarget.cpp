class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int low = 0;
        int high = letters.size() - 1;
        long int mid=-1;
        char result = letters[0];  

        while (low <= high) 
        {
            mid = (high + low) / 2; 

            if (letters[mid] == target) 
            {
                low = mid + 1;
     
            } 
            else if (letters[mid] > target) 
            {
                
                result = letters[mid];  
                high = mid - 1;  
            }
            else 
            {
                low = mid + 1;  
            }
        }

        return result;
    }
};


