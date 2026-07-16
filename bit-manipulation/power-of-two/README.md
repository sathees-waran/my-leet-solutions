# Power of Two

## Problem
[LeetCode Link](https://leetcode.com/problems/power-of-two/)

Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.

An integer `n` is a power of two if there exists an integer `x` such that `n == 2^x`.

**Example:**
Input: n = 16
Output: true
Explanation: 2^4 = 16

## Approach
1. If `n` is less than or equal to 0, it cannot be a power of two, so return `false`.
2. A power of two has exactly one bit set in its binary representation.
3. Use the bit trick `n & (n - 1)`, which clears the lowest set bit of `n`.
4. If `n` is a power of two, this operation results in `0`.
5. Return `true` if the result is `0`, otherwise return `false`.

## Complexity
- Time: O(1)
- Space: O(1)