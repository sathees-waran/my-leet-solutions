# 108. Convert Sorted Array to Binary Search Tree

## Problem  [LeetCode Link](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)

Given an integer array `nums` where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

**Example:**
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]

## Approach

*Always pick the middle element as the root so the left and right halves stay balanced at every level.*

1. Use a helper function `build` that operates on a `[left, right]` index range of the array.
2. If `left > right`, the range is empty — return `NULL`.
3. Compute `mid` as the middle index of the range and create a new node with `nums[mid]` as its value.
4. Recursively build the left subtree from the range `[left, mid - 1]` and the right subtree from `[mid + 1, right]`.
5. Return the constructed node; the top-level call starts with the full range `[0, numsSize - 1]`.

## Complexity

- **Time Complexity:** O(n) — each element is visited exactly once to create its corresponding node.
- **Space Complexity:** O(log n) — recursion stack depth, since the tree is height-balanced (excluding the O(n) space for the output tree itself).