// 62. Unique Paths
// Medium

// A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

// The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

// How many possible unique paths are there?


// Above is a 7 x 3 grid. How many possible unique paths are there?
    
// https://leetcode.com/problems/unique-paths/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> t(n,1);
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                t[j]+=t[j-1];
            }
        }
        return t[n-1];
    }
};
