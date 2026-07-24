# Find the Index of the First Occurrence in a String

## Problem  [LeetCode Link](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)

Given two strings `haystack` and `needle`, return the index of the first occurrence of `needle` in `haystack`, or -1 if `needle` is not part of `haystack`.

**Example:**
Input: haystack = "sadbutsad", needle = "sad"
Output: 0

## Approach

*Slide a window over haystack and compare it character by character against needle, resetting on any mismatch.*

1. Compute the lengths of `haystack` and `needle`; if `needle` is longer, return -1 immediately.
2. Walk through `haystack` with pointer `i`. Whenever `haystack[i]` matches `needle[0]`, remember this position as `index` and start a nested comparison.
3. In the nested loop, advance `i` and `j` together comparing `haystack[i]` with `needle[j]`. If any pair mismatches, mark `found` as 0 and break out.
4. If the nested loop completes without mismatch, `found` stays 1 and the outer loop breaks, since the full match starting at `index` is complete.
5. If the match attempt fails, reset `j` to 0 and continue the outer scan from `index + 1` so no starting position is skipped.
6. After the loop, return `index` if `found` is 1, otherwise return -1.

## Complexity

- **Time Complexity:** O(n * m) — in the worst case, for each of the n starting positions in haystack, up to m characters of needle are compared.
- **Space Complexity:** O(1) — only a fixed set of index variables are used, with no extra data structures.