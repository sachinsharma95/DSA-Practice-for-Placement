Question link leetcode :: https://leetcode.com/problems/search-a-2d-matrix/description/


// code 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row  = matrix.size();
        int col = matrix[0].size();
        // using Binary Search
        int s =0;
        int e= row*col-1;
        int mid = s+(e-s)/2; // calculate mid 
        
        while(s<=e){
            int element  = matrix[mid/col][mid%col];
           
            if(element ==target){
                return 1;
                
            }
            if(element<target){
                s= mid+1;
                
            }
            else{
                e= mid-1;
                
            }
            mid = s+(e-s)/2;
        }
        return 0;
    }
};
