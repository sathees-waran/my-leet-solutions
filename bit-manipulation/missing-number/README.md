# Missing Number

## Problem  [LeetCode Link](https://leetcode.com/problems/missing-number/)
Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the only number in that range that is missing from the array.

**Example:**
Input: nums = [3,0,1]
Output: 2

## Approach
*XOR every index and every value together with n; identical numbers cancel out, leaving only the missing one.*

1. Initialize `ans` with `numsSize` (this accounts for the index `n`, which isn't a valid array index).
2. Iterate through the array from `i = 0` to `numsSize - 1`.
3. At each step, XOR `ans` with the current index `i` and with `nums[i]`.
4. Since XOR-ing a number with itself cancels it out (`a ^ a = 0`) and XOR-ing with 0 leaves it unchanged (`a ^ 0 = a`), all indices and values that appear in both sets cancel each other.
5. The only value left un-cancelled after the loop is the missing number, which is returned as `ans`.

## Complexity
- **Time Complexity:** O(n) — the array is traversed exactly once.
- **Space Complexity:** O(1) — only a single variable `ans` is used, no extra data structures.