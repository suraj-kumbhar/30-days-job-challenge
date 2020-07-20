// 128. Longest Consecutive Sequence
// Hard


// Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

// Your algorithm should run in O(n) complexity.

// Example:

// Input: [100, 4, 200, 1, 3, 2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

//     https://leetcode.com/problems/longest-consecutive-sequence/

// Intuition :
// - Add all the elements to a set
// - set maxSeqLen = 1
// - For every element in set
//     - Find if the element is the first element of the seq:
//         - Find the seq by searching for the next elements in the set
//             - increment the currMaxSeqLen
//         - set maxSeqLen to the max of currMaxSeqLen and maxSeqLen
// - return the maxSeqLen



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        if(nums.empty()) {
            return 0;
        }
        for(int i: nums) {
            s.insert(i);
        }
        
        int longestStreak = 0;
        for(int i: s) {
            if(s.find(i-1)==s.end()) {
                int currEle = i;
                int currStreak = 1;
                while(s.find(currEle+1)!=s.end()) {
                    currEle += 1;
                    currStreak += 1;
                }
                
                longestStreak = max(longestStreak, currStreak);
            }
            
        }
        return longestStreak;
    }
};