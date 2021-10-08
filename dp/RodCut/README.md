# [`Rod Cut`](RodCut.cpp)

## Algorithm
```
rod_cut(price, length, n, N, memo):
  if n == 0 or N == 0
    return 0

  if memo[n][N] != -1
    return memo[n][N]

  if length[n - 1] <= N
    memo[n][N] = max(price[n - 1] + rod_cut(price, length, n, N - length[n - 1], memo), rod_cut(price, length, n - 1, N, memo))
  else
    memo[n][N] = knapsack(price, length, n - 1, N, memo)

  return memo[n][N]
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*N))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n*N))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n*N))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*N))
