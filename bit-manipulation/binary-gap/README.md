# Binary Gap

## Problem  [LeetCode Link](https://leetcode.com/problems/binary-gap/)

Given a positive integer `n`, find and return the longest distance between any two adjacent `1`'s in the binary representation of `n`. If there are no two adjacent `1`'s, return `0`.

Two `1`'s are adjacent if there are only `0`'s separating them (possibly none). The distance between two `1`'s is the absolute difference between their bit positions.

**Example:**
Input: n = 22
Output: 2
Explanation: 22 in binary is "10110", the adjacent 1's are at positions 1, 2, and 4, giving distances 1 and 2. The longest is 2.

## Approach

*Track the bit position of the last seen `1` while scanning through the bits, updating the maximum distance whenever a new `1` is found.*

1. Initialize `prev` to `-1` to mark that no `1` has been seen yet, `ans` to `0`, and `pos` to `0` to track the current bit position.
2. While `n > 0`, check if the least significant bit is `1` using `n & 1`.
3. If it is `1` and `prev != -1`, compute `dist = pos - prev` and update `ans` if `dist` is larger.
4. Update `prev` to the current `pos` whenever a `1` is found.
5. Increment `pos` and right-shift `n` by 1 to process the next bit.
6. Return `ans` once all bits have been processed.

## Complexity

- **Time Complexity:** O(log n) — the loop runs once for each bit in `n`.
- **Space Complexity:** O(1) — only a few variables are used regardless of input size.