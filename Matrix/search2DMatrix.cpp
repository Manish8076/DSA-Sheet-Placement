
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         
       bool find = false;  
       int i =0;
       int j = matrix.size();

    for(int i =0; i<matrix.size(); i++){
        for(int j =0; j<matrix[0].size(); j++){
            if(matrix[i][j] == target){
                find = true;
            }
        }
    } 
        return find;
    }
};
