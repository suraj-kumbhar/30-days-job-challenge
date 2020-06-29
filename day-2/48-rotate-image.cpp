// 48. Rotate Image
// Medium

// You are given an n x n 2D matrix representing an image.

// Rotate the image by 90 degrees (clockwise).

// Note:

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

// Example 1:

// Given input matrix = 
// [
//   [1,2,3],
//   [4,5,6],
//   [7,8,9]
// ],

// rotate the input matrix in-place such that it becomes:
// [
//   [7,4,1],
//   [8,5,2],
//   [9,6,3]
// ]
// Example 2:

// Given input matrix =
// [
//   [ 5, 1, 9,11],
//   [ 2, 4, 8,10],
//   [13, 3, 6, 7],
//   [15,14,12,16]
// ], 

// rotate the input matrix in-place such that it becomes:
// [
//   [15,13, 2, 5],
//   [14, 3, 4, 1],
//   [12, 6, 8, 9],
//   [16, 7,10,11]
// ]

//https://leetcode.com/problems/rotate-image/

// class Solution {
// public:
//     void rotate(vector<vector<int>>& m) {
//         int n=m.size();
//         int tl=0;
//         int tr=n-1;
//         int bl=0;
//         int br=n-1;
        
//         for(int i=0;i<n/2;i++) {
//             for(int j=i;j<n-i-1;j++) {
//                 int temp1=m[i][n-j-1];//02
//                 int temp2=m[i][j];//00
//                 m[i][n-j-1] = temp2;//m[i][j];//02-00
//                 temp2=temp1;//02
//                 temp1=m[n-i-1][n-j-1];//22
//                 m[n-i-1][n-j-1]=temp2;//22-02
//                 temp2=temp1;//22
//                 temp1=m[n-i-1][j];//20
//                 m[n-i-1][j]=temp2;//20-22
//                 m[i][j]=temp1;//00-20
//                 cout<<"inner\n";
//             }
//             // for(int x=0;x<n; x++) {
//             //     for(int y=0;y<n;y++) {
//             //         cout<<m[x][y]<<" ";
//             //     }
//             //     cout<<"\n";
//             // }
//             cout<<"done\n";
//         }
//     }
// };



class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        reverse(m.begin(),m.end());
        int n=m.size();
        for(int i=0;i<n;++i) {
            for(int j=i+1;j<n;++j ){
                swap(m[i][j],m[j][i]);
            }
        }
    }
};