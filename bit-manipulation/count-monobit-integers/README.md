# Count Monobit Integers

## Problem  [LeetCode Link](https://leetcode.com/problems/count-monobit-integers/)
Given an integer `n`, a number is called a Monobit integer if every bit in its binary representation is identical (all 0s or all 1s). Count how many Monobit integers exist in the range `[0, n]`, inclusive.

**Example:**
Input: n = 4
Output: 3
Explanation: The integers 0 to 4 have binary forms 0, 1, 10, 11, and 100. Only 0, 1, and 3 have all identical bits.

## Approach
*Zero is always a Monobit integer, and every other Monobit integer is a run of all 1-bits (1, 3, 7, 15, ...), so count how many of these fit up to n.*

1. Start `count` at 1 to account for 0, which is always a Monobit integer.
2. Start `num` at 1, the smallest positive Monobit integer (binary "1").
3. While `num` is less than or equal to `n`, increment `count` and generate the next Monobit integer by shifting `num` left and setting the new least significant bit (`num = (num << 1) | 1`), producing 3, 7, 15, 31, and so on.
4. Once `num` exceeds `n`, stop and return `count`.

## Complexity
- **Time Complexity:** O(log n) — the loop runs once per bit length of `n`, since each Monobit integer roughly doubles in value.
- **Space Complexity:** O(1) — only a constant number of variables are used.