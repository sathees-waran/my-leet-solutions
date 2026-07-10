# Longest Common Prefix

## Problem
[LeetCode Link](https://leetcode.com/problems/longest-common-prefix/)

Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string `""`.

**Example:**
Input: strs = ["flower","flow","flight"]
Output: "fl"
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

## Approach
1. Use the first string (`strs[0]`) as the reference and compare it character by character against all other strings.
2. For each character index `i` in `strs[0]`, loop through the remaining strings (`strs[1]` to `strs[strsSize-1]`) and check if they have the same character at index `i`.
3. If a mismatch is found, or a shorter string ends, allocate a result buffer of size `i + 1`, copy the first `i` characters from `strs[0]`, null-terminate it, and return it as the common prefix.
4. If the loop completes without mismatches (meaning `strs[0]` itself is the common prefix, e.g. when it's the shortest string), allocate and return a copy of the entire `strs[0]` up to length `i`.
5. The loop naturally stops early if `strs[0]` ends before a mismatch occurs, since `strs[0][i]` becomes `'\0'`.

## Complexity
- Time: O(S), where S is the sum of all characters in all strings — worst case, every character is compared once.
- Space: O(m), where m is the length of the longest common prefix, for the allocated result string.