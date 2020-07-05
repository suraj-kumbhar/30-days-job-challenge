// 18. 4Sum
// Medium

// Given an array nums of n integers and an integer target, are there elements a, b, c, and d in nums such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

// Note:

// The solution set must not contain duplicate quadruplets.

// Example:

// Given array nums = [1, 0, -1, 0, -2, 2], and target = 0.

// A solution set is:
// [
//   [-1,  0, 0, 1],
//   [-2, -1, 1, 2],
//   [-2,  0, 0, 2]
// ]

// https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> res;
        if(nums.empty()) {
            return res;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++) {
            int target3=target-nums[i];
            for(int j=i+1;j<n;j++) {
                int target2= target3-nums[j];
                
                int s=j+1;
                int e=n-1;
                while(s<e) {
                    if((nums[s]+nums[e])<target2) {
                        s++;
                    }
                    else if((nums[s]+nums[e])>target2) {
                        e--;
                    }
                    else {
                        vector<int> temp(4,0);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[s];
                        temp[3]=nums[e];
                        res.push_back(temp);

                        while(s<e && nums[s]==temp[2]) {
                            ++s;
                        }
                        while(s<e && nums[e]==temp[3]) {
                            --e;
                        }
                    }
                }
                while(j+1 < n && nums[j+1]==nums[j]) {
                    ++j;
                }
            }
            while(i+1< n && nums[i+1]==nums[i]) {
                ++i;
            }
            
        }
        return res;
    }
};

