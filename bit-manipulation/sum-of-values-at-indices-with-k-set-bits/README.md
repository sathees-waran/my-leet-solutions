# Sum Indices With K Set Bits

## Problem  [LeetCode Link](https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/)
You are given a 0-indexed integer array `nums` and an integer `k`. Return an integer that denotes the sum of elements in `nums` whose corresponding indices have exactly `k` set bits in their binary representation.

**Example:**
Input: nums = [5,10,1,5,2], k = 1
Output: 13

## Approach
*Count the set bits in each index using Brian Kernighan's algorithm and accumulate values whose index matches the required bit count.*

1. Iterate over every index `i` from 0 to `numsSize - 1`.
2. For each index, repeatedly clear the lowest set bit using `temp = temp & (temp - 1)` and increment a counter until `temp` becomes 0.
3. If the resulting set bit count equals `k`, add `nums[i]` to the running sum.
4. Return the accumulated sum.

## Complexity
- **Time Complexity:** O(n log m) — where n is `numsSize` and m is the maximum index value, since counting set bits takes O(log m) per index.
- **Space Complexity:** O(1) — only a fixed number of extra variables are used.