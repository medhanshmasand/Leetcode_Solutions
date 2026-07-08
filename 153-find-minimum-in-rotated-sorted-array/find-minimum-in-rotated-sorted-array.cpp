class Solution {
public:
    int findMin(vector<int>& nums) {
        int temp = INT_MAX;
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                if(nums[mid] <= temp){
                    temp = nums[mid];
                }
            }
            if(nums[low] <= nums[mid]){
                if(nums[low] <= temp){
                 temp = nums[low];
                }
                
                low = mid +1;

            }
            else if (nums[mid] <= nums[high]){
                if(nums[mid] <= temp){
                    temp = nums[mid];
                }
                high  = mid -1;
            }
        }
        return temp;
    }
};