
# Hamming Distance

## Problem  [LeetCode Link](https://leetcode.com/problems/hamming-distance/)

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers `x` and `y`, return the Hamming distance between them.

**Example:**
Input: x = 1, y = 4
Output: 2

## Approach

*XOR the two numbers so every differing bit becomes a 1, then count the set bits.*

1. Compute `XOR = x ^ y`. Every bit that is set in the result marks a position where `x` and `y` differ.
2. Repeatedly clear the lowest set bit using `XOR = XOR & (XOR - 1)`, incrementing a counter each time.
3. Stop when `XOR` becomes 0, since no set bits remain.
4. Return `count`, the total number of differing bits.

## Complexity

- **Time Complexity:** O(k) — where k is the number of set bits in `x ^ y`, since each loop iteration clears exactly one set bit.
- **Space Complexity:** O(1) — only a fixed number of integer variables are used.
