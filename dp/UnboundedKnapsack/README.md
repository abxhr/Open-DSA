# [`Unbounded Knapsack`](UnboundedKnapsack.cpp)

## Algorithm
```
unbounded_knapsack(val, w, n, W, memo):
  if n == 0 or W == 0
    return 0

  if memo[n][W] != -1
    return memo[n][W]

  if w[n - 1] <= W
    memo[n][W] = max(val[n - 1] + unbounded_knapsack(val, w, n, W - w[n - 1], memo), unbounded_knapsack(val, w, n - 1, W, memo))
  else
    memo[n][W] = knapsack(val, w, n - 1, W, memo)

  return memo[n][W]
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*W))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n*W))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n*W))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*W))
