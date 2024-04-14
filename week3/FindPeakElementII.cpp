// A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom.

// Given a 0-indexed m x n matrix mat where no two adjacent cells are equal, find any peak element mat[i][j] and return the length 2 array [i,j].

// You may assume that the entire matrix is surrounded by an outer perimeter with the value -1 in each cell.

// You must write an algorithm that runs in O(m log(n)) or O(n log(m)) time.

vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int s = 0, e = m-1;

        while(s <= e){
            int Col = (s + e)/2;
            int Row = 0;
            for(int i = 0; i<n; i++){
                if(mat[i][Col] > mat[Row][Col]){
                    Row = i;
                }
            }

            int currElement = mat[Row][Col];
            int leftElement = Col == 0 ? -1 : mat[Row][Col-1];
            int rightElement = Col == m-1 ? -1 : mat[Row][Col+1];

            if(currElement > leftElement && currElement > rightElement){
                return {Row, Col};
            }
            else if(leftElement > currElement){
                e = Col - 1;
            }
            else{
                s = Col + 1;
            }

        }

        return {-1, -1};
    
    }