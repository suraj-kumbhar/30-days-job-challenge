// 1. Two Sum
// Easy

// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// Example:

// Given nums = [2, 7, 11, 15], target = 9,

// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1]

// https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n = nums.size();
        vector<int> result;
        for(int i=0;i<n;i++) {
            if(m.find(target-nums[i])==m.end()) {
                m[nums[i]]=i;
            }
            else{
                result.push_back(m[target-nums[i]]);
                result.push_back(i);
                break;
            }
        }
        return result;
    }
};