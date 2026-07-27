# Remove Duplicates from Sorted Array II

## Problem  [LeetCode Link](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)

Given an integer array `nums` sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same. Return the number of elements remaining.

**Example:**
Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]

## Approach

*Use a write pointer that only advances when the current element differs from the element two positions before it, ensuring at most two copies of any value remain.*

1. If `numsSize` is 2 or less, every element is already allowed at most twice, so return `numsSize` directly.
2. Initialize the write pointer `j` to 2, since the first two elements are always kept.
3. Iterate `i` from 2 to `numsSize - 1` using a read pointer.
4. Compare `nums[i]` with `nums[j - 2]`, the element two positions behind the write pointer. If they differ, `nums[i]` is safe to keep since it would not create a third duplicate.
5. When the comparison shows a difference, copy `nums[i]` into `nums[j]` and increment `j`.
6. If `nums[i]` equals `nums[j - 2]`, it would exceed the allowed count of two, so skip it.
7. Return `j` as the final count of elements remaining.

## Complexity

- **Time Complexity:** O(n) — a single pass through the array with the read pointer `i`.
- **Space Complexity:** O(1) — elements are overwritten in-place using only the pointer `j`, no extra array is used.