# Remove Element

**Problem:** [LeetCode Link](https://leetcode.com/problems/remove-element/)

**Approach:**
Use a two-pointer technique. Iterate through the array with `i`; whenever an element doesn't match `val`, copy it to the `count` position and increment `count`. Elements equal to `val` are simply skipped, effectively overwriting them in-place. `count` at the end represents the new length.

**Time Complexity:** O(n)
**Space Complexity:** O(1)