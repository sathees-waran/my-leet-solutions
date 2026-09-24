# 701. Insert into a Binary Search Tree

## Problem  [LeetCode Link](https://leetcode.com/problems/insert-into-a-binary-search-tree/)

You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

**Example:**
Input: root = [4,2,7,1,3], val = 5
Output: [4,2,7,1,3,5]

## Approach

*Follow the BST property down to the correct empty spot, then attach a new node there.*

1. If the current node is `NULL`, this is the correct empty spot — allocate a new node with the given value and return it.
2. If `val` is less than the current node's value, recurse into the left subtree and reattach the (possibly updated) result.
3. If `val` is greater than the current node's value, recurse into the right subtree and reattach the (possibly updated) result.
4. Return the current node so the parent's link is preserved as the recursion unwinds.

## Complexity

- **Time Complexity:** O(H) — where H is the height of the tree, since insertion follows a single root-to-leaf path; O(log n) for a balanced tree, O(n) worst case for a skewed one.
- **Space Complexity:** O(H) — recursion stack depth, bounded by the tree's height (plus O(1) for the new node).