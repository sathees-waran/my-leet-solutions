# Number of Steps to Reduce a Number to Zero

## Problem  [LeetCode Link](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/)
Given an integer `num`, return the number of steps to reduce it to zero. In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

**Example:**
Input: num = 14
Output: 6
Explanation: 14 -> 7 -> 6 -> 3 -> 2 -> 1 -> 0

## Approach
*Simulate the process directly, using a bitwise check to decide between subtraction and right shift.*

1. Initialize `count` to 0.
2. While `num` is not 0:
   - Check the least significant bit using `num & 1`.
   - If it is 1 (odd), decrement `num` by 1.
   - If it is 0 (even), right shift `num` by 1, which is equivalent to dividing by 2.
   - Increment `count` after each step.
3. Return `count` once `num` reaches 0.

## Complexity
- **Time Complexity:** O(log n) — the number is halved on every even step, so the loop runs proportional to the number of bits in `num`.
- **Space Complexity:** O(1) — only a constant number of variables are used.