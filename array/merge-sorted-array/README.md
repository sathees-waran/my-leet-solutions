# Merge Sorted Array

## Problem
[LeetCode Link](https://leetcode.com/problems/merge-sorted-array/)

## Approach
`nums1` has a length of `m + n`, where the first `m` elements are the valid values and the last `n` elements are placeholder zeros to be overwritten. `nums2` has `n` valid elements.

Instead of merging from the front (which would overwrite unprocessed elements in `nums1`), merge from the back:

1. Use three pointers: `i = m - 1` (last valid element in `nums1`), `j = n - 1` (last element in `nums2`), `k = m + n - 1` (last index of `nums1`).
2. Compare `nums1[i]` and `nums2[j]`, place the larger value at `nums1[k]`, and move the corresponding pointer(s) backward.
3. Continue until all elements from `nums2` are placed. If `nums1` still has remaining elements, they're already in the correct position, so no extra work is needed.
4. If `nums2` still has remaining elements, copy them over.

This avoids overwriting values in `nums1` before they've been compared, and needs no extra array.

## Complexity
- Time: O(m + n)
- Space: O(1)