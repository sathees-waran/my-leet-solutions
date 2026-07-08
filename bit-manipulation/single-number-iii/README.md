# Single Number III

**Problem:** [LeetCode Link](https://leetcode.com/problems/single-number-iii/)

**Approach:**
XOR all numbers together — since pairs cancel out, the result is the XOR of the two unique numbers. Isolate any set bit in this XOR result (using `x & -x`) — this bit must differ between the two unique numbers, since XOR only sets bits where the operands differ. Split all numbers into two groups based on whether that bit is set, then XOR each group separately to isolate each unique number.

**Time Complexity:** O(n)
**Space Complexity:** O(1) (excluding the output array)