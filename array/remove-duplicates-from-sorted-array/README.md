# Remove Duplicates from Sorted Array

## Problem  [LeetCode Link](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Return the number of unique elements.

**Example:**
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]

## Approach

*Use a slow pointer to track the last unique element and a fast pointer to scan ahead for the next distinct value.*

1. Initialize `k` to 0, representing the index of the last unique element found so far.
2. Iterate `i` from 1 to `numsSize - 1` using a fast pointer.
3. If `nums[i]` differs from `nums[k]`, it is a new unique value, so increment `k` and copy `nums[i]` into `nums[k]`.
4. If `nums[i]` equals `nums[k]`, it is a duplicate, so skip it and continue.
5. Since the array is already sorted, all duplicates are adjacent, so this single pass places every unique element at the front of the array.
6. Return `k + 1` as the count of unique elements.

## Complexity

- **Time Complexity:** O(n) — a single pass through the array with the fast pointer `i`.
- **Space Complexity:** O(1) — duplicates are removed in-place using only the pointer `k`, no extra array is used.