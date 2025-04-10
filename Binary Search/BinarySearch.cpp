class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int low = 0;
        int high =nums.size() - 1;
        int mid = 0;
        int result = -1 ;
        int test =0;

        while(low <= high)
        {
            mid = (low + high ) / 2;
            test = nums[mid];

            if(test==target  )
            {
                result = mid ;
                break;

            }
            else if(test > target)
            {
                high = mid -1 ; 
                
            }
            else
            {
                low = mid +1;
            }
        }

        return result ;

        
    }
};
