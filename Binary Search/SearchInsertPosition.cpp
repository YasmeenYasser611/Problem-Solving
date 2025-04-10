class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int mid =0;
        int low =0;
        int high = nums.size() - 1;
        int result =-1;



        while(low <= high)
        {

            mid = (low +high) /2;
            if(nums[mid] == target)
            {

                result = mid;
                break; 

            }
            else if(nums[mid] > target)
            {
                high = mid -1;
            }
            else
            {
                low = mid +1;
            }

        }

        if(result ==-1)
        {
            result = low  ;
        }




        return result ;
    }
};
