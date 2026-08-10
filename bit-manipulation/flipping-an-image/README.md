# Flip and Invert Image

## Problem  [LeetCode Link](https://leetcode.com/problems/flip-and-invert-image/)

Given an `n x n` binary matrix `image`, flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.

To invert an image means that each `0` is replaced by `1`, and each `1` is replaced by `0`.

**Example:**
Input: image = [[1,1,0],[1,0,1],[0,0,0]]
Output: [[1,0,0],[0,1,0],[1,1,1]]

## Approach

*Flipping a row and inverting each bit can be done together by swapping mirrored pairs and XORing them with 1 in a single pass.*

1. For each row, set two pointers `left` at the start and `right` at the end.
2. While `left <= right`, swap `image[i][left]` and `image[i][right]`, XORing each with `1` during the swap so the values are inverted at the same time.
3. Move `left` forward and `right` backward, continuing until they cross.
4. When `left == right` (odd-length row), the middle element is still inverted correctly since it gets XORed with `1` on its own.
5. Reuse the input array and `imageColSize` for the output, since the operation is done in place.

## Complexity

- **Time Complexity:** O(n × m) — every element in the matrix is visited exactly once during the swap-and-invert pass.
- **Space Complexity:** O(1) — the flip and invert are performed in place with no extra allocation beyond the output pointers.s