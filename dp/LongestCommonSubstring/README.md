# [`Longest Common Substring`](LongestCommonSubstring.cpp)

## Algorithm
```
LCSubStr(X, Y, m, n)
  memo[m+1][n+1]
  result = 0

  for i = 0 -> m
    for j = 0 -> n
      if i == 0 or j == 0
        memo[i][j] = 0
      else if X[i - 1] == Y[j - 1]
        memo[i][j] = memo[i - 1][j - 1] + 1
        result = max(result, memo[i][j])
      else
        memo[i][j] = 0
  return result

```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*m))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n*m))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n*m))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*m))
