# Binary Prefix Divisible By 5
## Problem  [LeetCode Link](https://leetcode.com/problems/binary-prefix-divisible-by-5/)
You are given a binary array `nums` (0-indexed).

We define `xi` as the number whose binary representation is the subarray `nums[0..i]` (from the most significant bit to the least significant bit).

Return an array of booleans `answer` where `answer[i]` is `true` if `xi` is divisible by 5.

**Example:**
Input: nums = [0,1,1]
Output: [true,false,false]
Explanation: The input numbers in binary are 0, 01, 011; that is 0, 1, 3 in base-10. Only the first number is divisible by 5, so answer[0] is true.

**Example:**
Input: nums = [1,1,1]
Output: [false,false,false]

## Approach
*Track the running remainder mod 5 instead of building the actual number, since appending a bit is equivalent to doubling the value and adding the bit.*
1. Allocate a boolean array `ans` of size `numsSize` and set `*returnSize` to `numsSize`.
2. Maintain a running remainder `rem`, initialized to 0.
3. For each index `i`, update `rem` as `(rem * 2 + nums[i]) % 5`. This mirrors shifting the binary number left by one bit and appending `nums[i]`, kept small via modular arithmetic.
4. Set `ans[i]` to true if `rem` equals 0, meaning the prefix value formed so far is divisible by 5.
5. Return `ans` once all indices are processed.

## Complexity
- **Time Complexity:** O(n) — each element is processed once with constant-time work.
- **Space Complexity:** O(n) — for the output array; excluding output, the auxiliary space is O(1).