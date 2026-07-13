# Integer to Roman

## Problem

[LeetCode Link](https://leetcode.com/problems/integer-to-roman/)

Given an integer `num`, convert it to a Roman numeral.

Example:
Input: num = 1994
Output: "MCMXCIV"

## Approach

1. Define two parallel arrays: `values` holding integer values from largest (1000) to smallest (1), including subtractive combinations (900, 400, 90, 40, 9, 4), and `symbols` holding the corresponding Roman numeral strings.
2. Allocate a buffer `str` large enough to hold the result and initialize it as an empty string.
3. Iterate through the `values` array from largest to smallest.
4. For each value, while `num` is greater than or equal to that value, append the corresponding symbol to `str` and subtract the value from `num`.
5. Stop once `num` reaches 0, and return the constructed string.

## Complexity

- Time: O(1), since the number of iterations is bounded by a fixed set of 13 values regardless of input size.
- Space: O(1), excluding the output buffer, as no additional data structures scale with input.