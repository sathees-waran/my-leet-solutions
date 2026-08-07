# Number Complement

## Problem  [LeetCode Link](https://leetcode.com/problems/number-complement/)

The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

Given an integer `num`, return its complement.

**Example:**
Input: num = 5
Output: 2
Explanation: 5 is "101" in binary and its complement is "010" which is 2.

## Approach

*Scan bits from the highest position down, skip leading zeros beyond the number's actual bit-width, and flip only the meaningful bits.*

1. Initialize `ans = 0` and a flag `started = 0` to track when the first set bit (the highest bit of `num`) has been encountered.
2. Iterate `i` from 31 down to 0, examining bit `i` of `num` each time.
3. Once a set bit is found, set `started = 1` so leading zero bits outside the actual bit-width are ignored.
4. After `started` becomes true, shift `ans` left by 1 and OR in the flipped value of the current bit using `!((num >> i) & 1)`.
5. Return `ans`, which holds the complement built only from the relevant bits.

## Complexity

- **Time Complexity:** O(1) — the loop always runs a fixed 32 iterations regardless of input size.
- **Space Complexity:** O(1) — only a fixed number of integer variables are used.