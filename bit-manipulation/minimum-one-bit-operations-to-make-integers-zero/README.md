# Minimum One Bit Operations to Make Integers Zero

## Problem  [LeetCode Link](https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/)

Given an integer `n`, in one operation you can either change the rightmost bit, or change the i-th bit if the (i-1)-th bit is 1 and all bits before that (i-2)-th through 0th are 0. Return the minimum number of operations needed to transform `n` into 0.

**Example:**
Input: n = 3
Output: 2
Explanation: The binary representation of 3 is "11". "11" -> "01" -> "00".

## Approach

*Recognize that the allowed operations correspond exactly to converting between standard binary and Gray code, so the answer is the integer value obtained by decoding `n` as a Gray code.*

1. Initialize `ans` to 0.
2. While `n` is nonzero, XOR `ans` with the current value of `n`.
3. Right shift `n` by 1 bit.
4. Repeat until `n` becomes 0, accumulating the XOR at each step.
5. Return `ans`, which represents the minimum number of operations.

## Complexity

- **Time Complexity:** O(log n) — the loop runs once per bit in `n`.
- **Space Complexity:** O(1) — only a constant number of variables are used.