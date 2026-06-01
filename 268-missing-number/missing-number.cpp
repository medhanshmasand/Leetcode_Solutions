class Solution { //BRUTE
public:
    int missingNumber(vector<int>& nums) {
        vector<int> temp;
    
        for(int i=0;i <= nums.size();i++){
            temp.push_back(i);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i < nums.size(); i++){
            if(nums[i] != temp[i]){
                return temp[i]; //Scenario A (MIDDLE MISSING)
            }
            
        }
        return temp.back(); //Scenario B (END NUMBER MISSING)

    }
};