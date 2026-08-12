# Sort Integers by The Number of 1 Bits

## Problem  [LeetCode Link](https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/)
You are given an integer array `arr`. Sort the integers in the array in ascending order by the number of 1's in their binary representation and in case of two or more integers have the same number of 1's, sort them in ascending order.

**Example:**
Input: arr = [0,1,2,3,4]
Output: [0,1,2,4,3]
Explanation: [0] is the only integer with 0 bits. [1,2,4] all have 1 bit. [3] has 2 bits.

## Approach
*Encode the bit count into the upper bits of each number so a single numeric sort handles both criteria at once.*

1. Since the constraints guarantee `arr[i] <= 10^4` (fits within 14 bits), use the upper bits as a safe scratch space for the popcount.
2. For each element, compute its number of set bits using `__builtin_popcount` and shift it left by 14, then add it to the original value. This packs the bit count into the higher bits while preserving the original value in the lower 14 bits.
3. Sort the modified array using `qsort` with a standard ascending integer comparator. Since the bit count occupies the higher-order bits, it becomes the primary sort key, and the original value (in the lower bits) naturally becomes the secondary tie-breaker.
4. After sorting, mask each element with `(1 << 14) - 1` to strip off the encoded bit count and restore the original values.
5. Set `*returnSize` to `arrSize` and return the modified `arr`, since the array is sorted in place.

## Complexity
- **Time Complexity:** O(n log n) — dominated by the `qsort` call over `n` elements.
- **Space Complexity:** O(1) — the sort is performed in place with no additional array allocated (excluding sort internals).