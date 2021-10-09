# [`Longest Repeating Subsequence`](LongestRepeatingSubsequence.cpp)

## Algorithm
```
lrs(x, y, n, m,memo)

  if n == 0 or m == 0
    return 0

  if memo[n][m] != -1
    return memo[n][m]

  if (x[n - 1] == y[m - 1]) and (n != m)
    memo[n][m] = 1 + lrs(x, y, n - 1, m - 1, memo)
  else
    memo[n][m] = max(lrs(x, y, n - 1, m, memo), lrs(x, y, n, m - 1, memo))

  return memo[n][m]

```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*m))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n*m))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n*m))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*m))
