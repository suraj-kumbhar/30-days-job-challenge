// 31. Next Permutation

// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

// If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

// The replacement must be in-place and use only constant extra memory.

// Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.

// 1,2,3 → 1,3,2
// 3,2,1 → 1,2,3
// 1,1,5 → 1,5,1

// https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return;
        int i=0;
        int flag=0;
        for(i=n-1;i>0;i--) {
            if(nums[i]>nums[i-1]) {
                flag=1;
                break;
            }
        }

        if(flag==1) {
            for(int j=n-1;j>=0;j--) {
                if(nums[j]>nums[i-1]) {
                    swap(nums[i-1],nums[j]);
                    break;
                }
            }
        }
        reverse(nums.begin()+i,nums.begin()+n);
    }
};