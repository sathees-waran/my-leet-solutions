# Jump Game

## Problem  [LeetCode Link](https://leetcode.com/problems/jump-game/)

You are given an integer array `nums`. You start at the first index, and each element represents the maximum jump length from that position. Determine whether you can reach the last index.

**Example:**
Input: nums = [2,3,1,1,4]
Output: true

## Approach

*Work backward from the end, greedily tracking the leftmost index that is known to be able to reach the last index.*

1. Initialize `last` to `numsSize - 1`, the index of the last position (the target).
2. Iterate `i` backward from `numsSize - 2` down to `0`.
3. At each index `i`, check if `i + nums[i] >= last`. If true, it means from index `i` we can jump far enough to reach a position that is already known to reach the target.
4. If the condition holds, update `last = i`, since `i` now becomes the new leftmost "good" index.
5. After the loop, if `last` has been reduced all the way to `0`, it means the starting index itself can reach the end, so return `true`; otherwise return `false`.

## Complexity

- **Time Complexity:** O(n) — a single backward pass through the array.
- **Space Complexity:** O(1) — only the variable `last` is used, no extra array.