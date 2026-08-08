# Binary Number with Alternating Bits

## Problem  [LeetCode Link](https://leetcode.com/problems/binary-number-with-alternating-bits/)

Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

**Example:**
Input: n = 5
Output: true
Explanation: The binary representation of 5 is: 101

## Approach

*XORing n with its right shift cancels adjacent bits that differ, turning an alternating pattern into a solid run of 1s.*

1. Compute `x = n ^ (n >> 1)`. If the bits of `n` alternate, every pair of adjacent bits differs, so every bit in `x` becomes 1, producing a number of the form `0b111...1`.
2. A number of the form `0b111...1` always satisfies `x & (x + 1) == 0`, since adding 1 to all-ones carries through every bit and clears them all.
3. Return whether `x & (x + 1) == 0`. If true, `n` has alternating bits; otherwise it does not.

## Complexity

- **Time Complexity:** O(1) — the number of bits in a 32-bit integer is fixed, so the operations take constant time.
- **Space Complexity:** O(1) — only a single auxiliary variable `x` is used.