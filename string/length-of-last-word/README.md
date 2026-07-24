# Length of Last Word

## Problem  [LeetCode Link](https://leetcode.com/problems/length-of-last-word/)

Given a string `s` consisting of words and spaces, return the length of the last word in the string. A word is a maximal substring consisting of non-space characters only.

**Example:**
Input: s = "Hello World"
Output: 5

## Approach

*Skip trailing spaces from the end, then count characters until the next space or the start of the string.*

1. Start a pointer `i` at the last index of the string.
2. Move `i` backward while it points to a space, skipping any trailing whitespace.
3. Move `i` backward again, this time counting each character, while it points to a non-space character.
4. Stop counting as soon as a space is hit or the start of the string is reached.
5. Return the count, which represents the length of the last word.

## Complexity

- **Time Complexity:** O(n) — each character of the string is visited at most once while skipping spaces and counting the last word.
- **Space Complexity:** O(1) — only a fixed set of index and counter variables are used, with no extra data structures.