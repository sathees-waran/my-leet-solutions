# 700. Search in a Binary Search Tree

## Problem  [LeetCode Link](https://leetcode.com/problems/search-in-a-binary-search-tree/)

You are given the root of a binary search tree (BST) and an integer val.

Find the node in the BST whose value equals val and return the subtree rooted with that node. If such a node does not exist, return null.

**Example:**
Input: root = [4,2,7,1,3], val = 2
Output: [2,1,3]

## Approach

*Use the BST property to eliminate half the tree at each step instead of searching both subtrees.*

1. If the current node is `NULL`, the value doesn't exist in the tree — return `NULL`.
2. If `val` is less than the current node's value, the target can only be in the left subtree — recurse left.
3. If `val` is greater than the current node's value, the target can only be in the right subtree — recurse right.
4. If neither condition holds, the current node's value equals `val` — return it.

## Complexity

- **Time Complexity:** O(H) — where H is the height of the tree, since each step discards one subtree; O(log n) for a balanced tree, O(n) worst case for a skewed one.
- **Space Complexity:** O(H) — recursion stack depth, bounded by the tree's height.