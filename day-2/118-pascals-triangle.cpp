// 118. Pascal's Triangle

// Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.


// In Pascal's triangle, each number is the sum of the two numbers directly above it.

// Example:

// Input: 5
// Output:
// [
//      [1],
//     [1,1],
//    [1,2,1],
//   [1,3,3,1],
//  [1,4,6,4,1]
// ]


// https://leetcode.com/problems/pascals-triangle/


class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> res;
        for(int i=0;i<n;i++) {
            vector<int> t;
            for(int j = 0; j<=i;j++) {
                if(j==0||j==i) {
                    t.push_back(1);
                }
                else {
                    t.push_back(res[i-1][j]+res[i-1][j-1]);
                }
            }
            res.push_back(t);
        }
        return res;
    }
};