class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int maximum_streak = 0;
        for(int i=0;i<nums.size(); i++){
            if(nums[i] == 1){
                counter++;
                maximum_streak = max(counter,maximum_streak);
            }
            else counter = 0;
            

        }
        return maximum_streak;
            
        
    }
};