# Single Number

**Problem:** [LeetCode Link](https://leetcode.com/problems/single-number/)

**Approach:**
XOR all elements. Every number that appears twice cancels out (a ^ a = 0), leaving only the number that appears once.

**Time Complexity:** O(n)
**Space Complexity:** O(1)