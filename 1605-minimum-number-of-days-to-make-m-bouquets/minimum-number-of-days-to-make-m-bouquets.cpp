class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size() < (long long) m*k){
            return -1;
        }
        
        int low = *min_element(bloomDay.begin() , bloomDay.end());
        
        int high = *max_element(bloomDay.begin() , bloomDay.end());
        int ans;
        
        while(low <= high){
            int count = 0;
            int bouquet = 0;
            int mid = (low + high)/2;
            for(int i= 0 ; i < bloomDay.size() ; i++){
                if(bloomDay[i] <= mid){
                    count++;
                    if(count % k == 0){
                        bouquet++;
                    }
                }
                else {
                    count = 0;
                }
                
            }
            if(m <= bouquet){
                    ans = mid;
                    high = mid-1;
                }
                else{
                    low = mid +1;
                }

        }
        return ans;
        
    }
     
};