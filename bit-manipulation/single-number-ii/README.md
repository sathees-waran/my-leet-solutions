# Single Number II

**Problem:** [LeetCode Link](https://leetcode.com/problems/single-number-ii/)

**Approach:**
Every number except one appears exactly three times. For each bit position, sum the bits across all numbers — if the total count of set bits at that position is not a multiple of 3, that bit belongs to the unique number. Build the result bit by bit using this rule.

**Time Complexity:** O(n)
**Space Complexity:** O(1)