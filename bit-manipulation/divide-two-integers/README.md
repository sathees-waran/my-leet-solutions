# Divide Two Integers

## Problem  [LeetCode Link](https://leetcode.com/problems/divide-two-integers/)

Given two integers `dividend` and `divisor`, divide two integers without using multiplication, division, and mod operator. The integer division should truncate toward zero, meaning it loses its fractional part. Return the quotient after dividing `dividend` by `divisor`. Assume the environment does not allow storing 64-bit integers, and the quotient is in the range `[-2^31, 2^31 - 1]`; if the true quotient is outside this range, clamp it to `INT_MIN` or `INT_MAX`.

**Example:**
Input: `dividend = 10, divisor = 3`
Output: `3`

## Approach
*The quotient is built by checking, at each bit position from high to low, whether the divisor shifted left by that many bits still fits inside the remaining dividend — avoiding multiplication, division, and mod entirely.*
1. Handle the special overflow case first: if `dividend` is `INT_MIN` and `divisor` is `-1`, the true result exceeds `INT_MAX`, so return `INT_MAX` directly.
2. Convert both `dividend` and `divisor` to absolute values stored as `long long`, since `INT_MIN`'s absolute value does not fit in a signed 32-bit int.
3. Iterate `i` from 31 down to 0, checking at each step whether `dvd >> i >= dvs`, which tests if `dvs` shifted left by `i` bits still fits within the remaining `dvd`.
4. If it fits, add `1 << i` to the answer and subtract `dvs << i` from `dvd`.
5. Determine the sign of the result by XOR-ing the signs of the original `dividend` and `divisor`; negate the answer if exactly one was negative.
6. Cast and return the final answer as an `int`.

## Complexity
- **Time Complexity:** O(1) — the loop always runs a fixed 32 iterations regardless of input magnitude.
- **Space Complexity:** O(1) — only a fixed number of variables used.