// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n =matrix.size();
        int m =matrix[0].size();
        int row = 0;
        int col = m-1;

        while(row < n && col >=0){
           if(matrix[row][col] == target){
            return true;
           } 
           else if(matrix[row][col] < target){
            row++;
           }
           else{
            col--;
           }
        }

        return false;
    }