# Reverse Words in a String

## Problem

[LeetCode Link](https://leetcode.com/problems/reverse-words-in-a-string/)

Given an input string `s`, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in `s` will be separated by at least one space. Return a string of the words in reverse order, concatenated by a single space. The returned string should not have leading or trailing spaces, and words should be separated by only a single space.

Example:
Input: s = "  the sky is blue  "
Output: "blue is sky the"

## Approach

1. Compute the length of the string and set up two pointers, `word` and `ptr`, both starting at the beginning of the string.
2. Scan through the string character by character using `ptr`. Whenever a space or the null terminator is encountered, reverse the substring from `word` to `ptr` in place, then move `word` to just after the space.
3. Reverse the entire string once, which restores word order while leaving each word reversed internally.
4. Clean up spaces in a single pass: skip leading spaces and collapse consecutive spaces into one, writing valid characters to position `j`.
5. Trim a trailing space if one remains, then null-terminate the result at index `j`.

## Complexity

- Time: O(n), where n is the length of the string, since each character is visited a constant number of times across the reversal and cleanup passes.
- Space: O(1), as the reversal and cleanup are done in place without extra buffers.