# Convert a Number to Hexadecimal

## Problem  [LeetCode Link](https://leetcode.com/problems/convert-a-number-to-hexadecimal/)

Given an integer `num`, return a string representing its hexadecimal representation. For negative integers, the two's complement method is used.

**Example:**
Input: num = 26
Output: "1a"

## Approach

*Since hexadecimal digits map cleanly to 4-bit groups, repeatedly masking the last 4 bits and shifting right extracts each digit from least significant to most significant.*

1. Handle the special case where `num` is 0 by directly returning the string `"0"`.
2. Cast `num` to `unsigned int` so that negative numbers are treated in their two's complement bit pattern.
3. Use a lookup table of hex digits `"0123456789abcdef"` to convert 4-bit values into characters.
4. While the unsigned value is nonzero, extract the lowest 4 bits with `n & 0xF`, map it to a character, and shift `n` right by 4.
5. Since digits are generated in reverse order, reverse the resulting string before returning it.
6. Null-terminate the string and return the allocated buffer.

## Complexity

- **Time Complexity:** O(1) — at most 8 hex digits are processed since `num` is a 32-bit integer.
- **Space Complexity:** O(1) — the output buffer size is fixed at a maximum of 9 characters regardless of input.