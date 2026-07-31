# Best Time to Buy and Sell Stock

## Problem  [LeetCode Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i`th day.

You want to maximize your profit by choosing a single day to buy one stock and a different future day to sell that stock.

Return the maximum profit you can achieve. If no profit is possible, return `0`.

**Example:**

Input:
```text
prices = [7,1,5,3,6,4]
```

Output:
```text
5
```

Explanation:

- Buy on day 2 (price = 1)
- Sell on day 5 (price = 6)
- Maximum profit = 6 - 1 = 5

---

## Approach

*Traverse the array once while keeping track of the minimum stock price seen so far. At each day, calculate the profit if the stock were sold that day and update the maximum profit whenever a larger profit is found.*

1. Initialize `min_price` with the first day's stock price.
2. Initialize `max_profit` to `0`.
3. Traverse the array starting from the second day.
4. If the current price is smaller than `min_price`, update `min_price`.
5. Compute the profit by subtracting `min_price` from the current price.
6. If the calculated profit is greater than `max_profit`, update `max_profit`.
7. After processing all days, return `max_profit`.

---

## Complexity

- **Time Complexity:** **O(n)** — The array is traversed only once.
- **Space Complexity:** **O(1)** — Only a few variables are used, regardless of the input size.