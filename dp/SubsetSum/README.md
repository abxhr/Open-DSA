# [`Subset Sum`](SubsetSum.cpp)

## Algorithm
```
subsetSum(v, n, n, sum, memo):

  if sum == 0
    return true

  if n == 0
    return false

  if memo[n][sum] != -1
    return memo[n][sum]

  if v[n - 1] <= sum
    memo[n][sum] = subsetSum(v, n - 1, sum - v[n - 1], memo) or subsetSum(v, n - 1, sum, memo)
  else
    memo[n][sum] = subsetSum(v, n - 1, sum, memo)

  return memo[n][sum]
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*sum))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n*sum))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n*sum))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*sum))
