class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i < matrix.size() ; i++){
            for(int j = i; j< matrix[0].size(); j++){
                swap(matrix[i][j] , matrix[j][i]);
            }

        }         
            
    
        
    
        for(int j=0 ; j< matrix[0].size()/2 ; j++){

            for(int i=0; i< matrix.size() ; i++){
                swap(matrix[i][j] , matrix[i][n-j-1]);
            }
        }
    }
};

