// 73. Set Matrix Zeroes

// Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.

// Example 1:

// Input: 
// [
//   [1,1,1],
//   [1,0,1],
//   [1,1,1]
// ]
// Output: 
// [
//   [1,0,1],
//   [0,0,0],
//   [1,0,1]
// ]
// Example 2:

// Input: 
// [
//   [0,1,2,0],
//   [3,4,5,2],
//   [1,3,1,5]
// ]
// Output: 
// [
//   [0,0,0,0],
//   [0,4,5,0],
//   [0,3,1,0]
// ]
// Follow up:

// A straight forward solution using O(mn) space is probably a bad idea.
// A simple improvement uses O(m + n) space, but still not the best solution.
// Could you devise a constant space solution?

// https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int col0=1;
        int rows=mat.size();
        int cols=mat[0].size();
        
        for(int i=0;i<rows;i++) {
            if(mat[i][0]==0) {
                col0=0;
            }
            for(int j=1;j<cols;j++) {
                if(mat[i][j]==0) {
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
            }
        }
        
        for(int i=rows-1;i>=0;i--) {
            for(int j=cols-1;j>=1;j--){
                if(mat[i][0]==0||mat[0][j]==0) {
                    mat[i][j]=0;
                }
            }
            if(col0==0) {
                mat[i][0]=0;
            }
        }
    }
};