# Majority Element

## Problem  [LeetCode Link](https://leetcode.com/problems/majority-element/)

Given an array `nums` of size `n`, return the majority element.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

**Example:**
Input: nums = [2,2,1,1,1,2,2]
Output: 2

## Approach

*The intuition is that if every occurrence of the majority element cancels out one occurrence of a different element, the majority element will still remain standing after all cancellations.*

1. Initialize a candidate `val` with the first element and a `count` of 1.
2. Traverse the array starting from the second element.
3. If `count` becomes 0, set the current element as the new candidate and reset `count` to 1.
4. If the current element matches the candidate `val`, increment `count`.
5. Otherwise, decrement `count`.
6. After the traversal, `val` holds the majority element.

## Complexity

- **Time Complexity:** O(n) — the array is traversed exactly once.
- **Space Complexity:** O(1) — only a constant amount of extra space is used, regardless of input size.