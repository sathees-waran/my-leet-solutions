# Prime Number of Set Bits in Binary Representation

## Problem  [LeetCode Link](https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/)

Given two integers `left` and `right`, count the numbers in the inclusive range `[left, right]` whose number of set bits (1s) in binary is prime.

**Example:**
Input: left = 6, right = 10
Output: 4
Explanation: 6 -> 110 (2 set bits, 2 is prime), 7 -> 111 (3, prime), 9 -> 1001 (2, prime), 10 -> 1010 (2, prime).

## Approach

*Since the bit count of any number in the given constraints is small, the primes that can appear are a fixed, known set, so a precomputed bitmask can test primality in O(1).*

1. Build a bitmask where bit `i` is set if `i` is a prime number reachable as a bit count (2, 3, 5, 7, 11, 13, 17, 19 cover all possible popcounts within the problem's constraints).
2. For each number `n` from `left` to `right`, compute its set bit count using `__builtin_popcount(n)`.
3. Check whether that bit count is prime by testing if the corresponding bit in the mask is set, using `(mask >> bit_count) & 1`.
4. Increment the counter whenever the check passes, and return the total count after the loop finishes.

## Complexity

- **Time Complexity:** O((right - left) * log(right)) — each number in the range requires a popcount operation that takes time proportional to the number of bits.
- **Space Complexity:** O(1) — only a fixed-size mask and a few counters are used, independent of input size.