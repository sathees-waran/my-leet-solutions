# Rotate Array

## Problem  [LeetCode Link](https://leetcode.com/problems/rotate-array/)

Given an array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

**Example:**
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

## Approach

*The intuition is that each element simply moves to a new position that is `k` steps ahead, wrapping around the end of the array using the modulo operator.*

1. Create a temporary array `arr` of the same size as `nums`.
2. Traverse the original array, and for each index `i`, place `nums[i]` at position `(i + k) % numsSize` in `arr`. The modulo handles the wraparound at the end of the array.
3. Copy all elements from the temporary array `arr` back into the original array `nums`.

## Complexity

- **Time Complexity:** O(n) — the array is traversed twice, once to fill the temporary array and once to copy it back.
- **Space Complexity:** O(n) — an auxiliary array of size `numsSize` is used to store the rotated result.