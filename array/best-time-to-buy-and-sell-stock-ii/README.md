# Best Time to Buy and Sell Stock II

## Problem  [LeetCode Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)

You are given an integer array `prices` where `prices[i]` is the price of a given stock on the `i`th day`.

You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

However, you may not hold more than one share of the stock at a time. You must sell the stock before buying again.

Return the maximum profit you can achieve.

**Example:**

Input:
```text
prices = [7,1,5,3,6,4]
```

Output:
```text
7
```

Explanation:

- Buy on day 2 (price = 1), Sell on day 3 (price = 5) → Profit = 4
- Buy on day 4 (price = 3), Sell on day 5 (price = 6) → Profit = 3

Total Profit = 4 + 3 = **7**

---

## Approach

*Traverse the array once and add every positive price difference between consecutive days. Every increase contributes to the maximum possible profit, allowing multiple buy-sell transactions.*

1. Initialize `profit` to `0`.
2. Traverse the array from the second day to the last day.
3. Compare the current day's price with the previous day's price.
4. If the current price is higher, add the difference to `profit`.
5. Ignore days where the price decreases or remains the same.
6. Continue until all days have been processed.
7. Return the accumulated `profit`.

---

## Complexity

- **Time Complexity:** **O(n)** — The array is traversed exactly once.
- **Space Complexity:** **O(1)** — Only one variable is used to store the accumulated profit.