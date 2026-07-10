# Roman to Integer

## Problem
[LeetCode Link](https://leetcode.com/problems/roman-to-integer/)

Given a roman numeral, convert it to an integer.

Roman numerals are represented by seven symbols:

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

Symbols are usually written largest to smallest, left to right (e.g., `III` = 3). Six exceptions use subtraction instead of addition:
- `IV` = 4 (I before V)
- `IX` = 9 (I before X)
- `XL` = 40 (X before L)
- `XC` = 90 (X before C)
- `CD` = 400 (C before D)
- `CM` = 900 (C before M)

**Example:**
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90, IV = 4

## Approach
1. Iterate through the string one character at a time.
2. For each character, determine its value using a helper function `getValues`.
3. Inside the helper, check the current character against a fixed set of symbol values (I, V, X, L, C, D, M).
4. For the subtractive symbols (I, X, C), look ahead at the next character:
   - If the next character forms a valid subtractive pair (e.g., `I` followed by `V` or `X`), return the negative of the current symbol's value.
   - Otherwise, return the positive value.
5. Add the returned value to a running total for every character in the string.
6. Return the total once the end of the string is reached.

## Complexity
- Time: O(n), where n is the length of the string — each character is visited once.
- Space: O(1), only a constant amount of extra space is used.