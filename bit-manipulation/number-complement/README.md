# Number Complement

## Problem  [LeetCode Link](https://leetcode.com/problems/number-complement/)

The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

Given an integer `num`, return its complement.

**Example:**
Input: num = 5
Output: 2
Explanation: 5 is "101" in binary and its complement is "010" which is 2.

## Approach
1. Shift the bits by power of 2 numbers
2. After shifting we get a mask then XORing input with mask gives the expected output


## Complexity

- **Time Complexity:** O(1) 
- **Space Complexity:** O(1)
