# Minimum Number of Flips to Convert Binary Matrix to Zero Matrix

## Problem  [LeetCode Link](https://leetcode.com/problems/minimum-number-of-flips-to-convert-binary-matrix-to-zero-matrix/)

Given a `m x n` binary matrix `mat`, in one step you can choose one cell and flip it and all its existing four neighbors (up, down, left, right). Flipping a cell changes a 0 to 1 or a 1 to 0. Return the minimum number of steps required to convert `mat` into a zero matrix, or -1 if it is not possible.

**Example:**
Input: mat = [[0,0],[0,1]]
Output: 3
Explanation: One possible solution is to flip (1,0), then (0,1), then (1,1).

## Approach

*Encode the entire grid as a single integer bitmask and BFS over all reachable states until the all-zero state is found.*

1. Flatten the matrix into an integer `start`, where bit `(i * cols + j)` represents cell `(i, j)`.
2. Run BFS starting from `start`, tracking visited states in a `visited` array indexed by bitmask value.
3. At each level of BFS, if the current state equals 0, all cells are zero, so return the current step count.
4. Otherwise, for every cell `(i, j)`, compute the next state by XOR-ing the bits for that cell and its in-bounds neighbors (up, down, left, right) with the current state.
5. Push any unvisited resulting state into the queue and mark it visited.
6. Increment `steps` after processing all states at the current BFS level.
7. If the queue empties without reaching state 0, return -1.

## Complexity

- **Time Complexity:** O(2^(rows·cols) × rows × cols) — each of the up to 2^(rows·cols) states can be visited once, and each state branches into rows·cols possible flips.
- **Space Complexity:** O(2^(rows·cols)) — for the `visited` array and BFS `queue`, which together hold up to one entry per possible state.