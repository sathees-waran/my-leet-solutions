# Number of 1 Bits

## Problem  [LeetCode Link](https://leetcode.com/problems/number-of-1-bits/)
Write a function that takes the binary representation of an unsigned integer and returns the number of `1` bits it has (also known as the Hamming weight).

**Example:**
Input: `n = 00000000000000000000000000001011`
Output: `3`

## Approach
*Each bit of `n` can be inspected one at a time by shifting it into the lowest position and masking with 1.*
1. Initialize a `count` variable to 0 to track the number of set bits.
2. Loop `i` from 0 to 30, covering each bit position to check.
3. On each iteration, right-shift `n` by `i` positions and mask with `1` using `(n >> i) & 1` to isolate that bit.
4. If the isolated bit equals 1, increment `count`.
5. After the loop finishes, return `count` as the total number of 1 bits.

## Complexity
- **Time Complexity:** O(1) — the loop always runs a fixed number of iterations regardless of input value.
- **Space Complexity:** O(1) — only a fixed number of variables used.