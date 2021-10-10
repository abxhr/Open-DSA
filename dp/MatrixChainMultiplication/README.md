# [`Matrix Chain Multiplication`](MatrixChainMultiplication.cpp)

## Algorithm
```
matrix_chain_multiplication(a)
    n = a.size()
    dp[n][n]={0}
    for i = 1 -> n
        dp[i][i] = 0
    for l = 2 -> n
        for i = 1 -> n-l+1
            j = i + l - 1
            dp[i][j] = INT_MAXd
            for k = i -> j-1
                q = dp[i][k] + dp[k + 1][j] + a[i - 1] * a[k] * a[j]
                if q < dp[i][j]
                    dp[i][j] = q
    return dp[1][n-1]
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^3))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n^3))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n^3))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
