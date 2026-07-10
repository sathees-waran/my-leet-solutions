# Bitwise AND of Numbers Range

## Problem  [LeetCode Link](https://leetcode.com/problems/bitwise-and-of-numbers-range/)
Given two integers `left` and `right` that represent the range `[left, right]`, return the bitwise AND of all numbers in this range, inclusive.

**Example:**
Input: `left = 5, right = 7`
Output: `4`

## Approach
The bitwise AND of a range of numbers only keeps the common leading bits shared by `left` and `right` — any bit that differs somewhere in the range gets zeroed out.

1. Right-shift both `left` and `right` by 1 simultaneously, counting the number of shifts, until `left` equals `right`. This finds their common binary prefix.
2. Once `left == right`, that value represents the shared prefix.
3. Left-shift the result back by the number of shifts recorded, filling the removed bits with zeros.

## Complexity
- **Time Complexity:** O(log n) — bounded by the number of bits in the input (at most 32 shifts).
- **Space Complexity:** O(1) — only a fixed number of variables used.