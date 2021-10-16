# [`Longest Arithmetic Subsequence`](LongestArithmeticSubsequence.cpp)

## Algorithm
```
longest_arithmetic_sequence(a)
    res = 2
    n = a.size()
    if n <= 2
        return 2
    dp[n]={2}
    sort(a.begin(), a.end())
    for i = n - 2 -> i = 0
        j = i - 1, k = i + 1
        while j >= 0 and k < n
            if a[j] + a[k] == 2 * a[i]
                dp[i] = max(dp[k] + 1, dp[j])
                res = max(res, dp[i])
                j -= 1
                k += 1
            else if a[j] + a[k] < 2 * a[i]
                k += 1
            else
                j -= 1
    return res
}
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n^2))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n^2))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n))
