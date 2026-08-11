# Complement of Base 10 Integer
## Problem  [LeetCode Link](https://leetcode.com/problems/complement-of-base-10-integer/)
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

Given an integer `n`, return its complement.

**Example:**
Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, and its complement is "010" which is 2 in base-10.

**Example:**
Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, and its complement is "000" which is 0 in base-10.

## Approach
*Build a mask of all 1's matching the bit-length of n, then XOR it with n to flip every bit.*
1. If `n` is 0, return 1 directly, since its complement in a single-bit representation is 1.
2. Initialize `mask` to 1.
3. Left-shift `mask` and set its least significant bit to 1, repeating until `mask` is greater than or equal to `n`. This builds a sequence of all 1's spanning the same number of bits as `n`.
4. XOR `mask` with `n`. Since `mask` is all 1's, this flips every bit of `n`, producing the complement.
5. Return the result.

## Complexity
- **Time Complexity:** O(log n) — the loop runs once per bit in the binary representation of n.
- **Space Complexity:** O(1) — only a fixed number of integer variables are used.