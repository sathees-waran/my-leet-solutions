# Merge Two Sorted Lists

## Problem  [LeetCode Link](https://leetcode.com/problems/merge-two-sorted-lists/)
You are given the heads of two sorted linked lists, list1 and list2. Merge the two lists into one sorted list by splicing together the nodes of the first two lists. Return the head of the merged linked list.

**Example:**
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

## Approach
*Use a dummy node to anchor the merged list and repeatedly attach the smaller of the two current nodes.*

1. Create a dummy node and a `temp` pointer starting at dummy to build the result list.
2. While both `list1` and `list2` have nodes remaining, compare their values and link the smaller node to `temp -> next`, then advance that list's pointer.
3. Move `temp` forward to the newly attached node after each comparison.
4. Once one list is exhausted, attach the remaining non-empty list directly to `temp -> next`, since it is already sorted.
5. Return `dummy.next` as the head of the merged list.

## Complexity
- **Time Complexity:** O(m + n) — each node from both lists is visited and linked exactly once, where m and n are the lengths of list1 and list2.
- **Space Complexity:** O(1) — only a fixed number of pointers are used; no extra space proportional to input size is allocated.