# Power of Four

## Problem
[LeetCode Link](https://leetcode.com/problems/power-of-four/)

Given an integer `n`, return `true` if it is a power of four. Otherwise, return `false`.

An integer `n` is a power of four if there exists an integer `x` such that `n == 4^x`.

**Example:**
Input: n = 16
Output: true
Explanation: 4^2 = 16

## Approach
1. If `n` is less than or equal to 0, it cannot be a power of four, so return `false`.
2. Check that `n` has exactly one bit set using `n & (n - 1) == 0`, which confirms `n` is a power of two.
3. A power of four must have its single set bit in an even position (0, 2, 4, ...).
4. Use the mask `0x55555555`, which has bits set at all even positions, to verify the set bit of `n` lies in an even position.
5. Return `true` only if all three conditions hold.

## Complexity
- Time: O(1)
- Space: O(1)