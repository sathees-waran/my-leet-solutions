# Sum of All Subset XOR Totals

## Problem  [LeetCode Link](https://leetcode.com/problems/sum-of-all-subset-xor-totals/)
The XOR total of an array is defined as the XOR of all its elements, or 0 if the array is empty. Given an array `nums`, return the sum of all XOR totals for every subset of `nums`.

**Example:**
Input: nums = [1,3]
Output: 6

## Approach
*Each bit that is set in the OR of all elements contributes to exactly half of the 2^n subsets, so multiply the bitwise OR of the array by 2^(n-1).*

1. Compute the bitwise OR of all elements in `nums`.
2. Multiply the result by `2^(numsSize - 1)`, since each bit set in the OR appears in exactly half of the subsets.
3. Return the computed value as the total sum.

## Complexity
- **Time Complexity:** O(n) — a single pass over the array to compute the OR.
- **Space Complexity:** O(1) — only a fixed number of extra variables are used.