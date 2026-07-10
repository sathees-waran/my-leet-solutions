# Reverse Bits
## Problem  [LeetCode Link](https://leetcode.com/problems/reverse-bits/)
Given a 32-bit unsigned integer `n`, reverse the bits of the integer and return the result.
**Example:**
Input: `n = 00000010100101000001111010011100`
Output: `964176192` (`00111001011110000010100101000000`)
## Approach
Iterate through all 32 bits of `n`, one at a time from the least significant bit to the most significant bit.
At each step:
1. Left-shift `result` by 1 to make room for the next bit.
2. Extract the last bit of `n` using `n & 1` and OR it into `result`.
3. Right-shift `n` by 1 to move to the next bit.
After 32 iterations, `result` holds the bits of `n` in reverse order.
## Complexity
- **Time Complexity:** O(1) — always exactly 32 iterations, independent of input value.
- **Space Complexity:** O(1) — only a fixed number of variables used.
