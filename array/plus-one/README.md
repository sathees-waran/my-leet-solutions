# Plus One

## Problem  [LeetCode Link](https://leetcode.com/problems/plus-one/)

You are given a large integer represented as an array of digits, where each element is a single digit and the digits are ordered from most significant to least significant. Increment the large integer by one and return the resulting array of digits.

**Example:**
Input: digits = [1,2,9]
Output: [1,3,0]

## Approach

*Traverse the digits from right to left, incrementing the last digit and propagating a carry through any trailing 9s.*

1. Iterate `i` from `digitsSize - 1` down to `0`.
2. If `digits[i]` is less than 9, simply increment it, set `*returnSize` to `digitsSize`, and return `digits` immediately since no carry is needed.
3. If `digits[i]` equals 9, set it to 0 and let the carry continue to the next digit to the left.
4. If the loop finishes without returning, it means every digit was 9, so the carry has propagated past the most significant digit.
5. Allocate a new array `result` of size `digitsSize + 1`, set `result[0]` to 1, and copy the remaining digits (all already reset to 0) into `result[1..digitsSize]`.
6. Set `*returnSize` to `digitsSize + 1` and return `result`.

## Complexity

- **Time Complexity:** O(n) — in the worst case, all digits are visited once during the carry propagation.
- **Space Complexity:** O(1) for the no-carry case since `digits` is modified in-place; O(n) for the all-9s case since a new array of size `digitsSize + 1` is allocated.