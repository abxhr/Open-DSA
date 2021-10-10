# [`Longest Palindromic Substring`](LongestPalindromicSubstring.cpp)

## Algorithm
```
longest_palindrome(s)
    n = s.length()
    dp[n][n]
    max_len = 1
    for i=1 -> n
        dp[i][i]=1
    start = 0
    for i=0 -> n-1
        if s[i] == s[i + 1]
            dp[i][i + 1] = 1
            start = i
            max_len = 2
    for k=3 -> n
        for i=0 -> n-k+1
            j = i + k - 1
            if dp[i + 1][j - 1] and s[i] == s[j]
                dp[i][j] = 1
                if k > max_len
                    start = i
                    max_len = k
    for i = start -> start+max_len-1
        print(s[i])
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n^2))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n^2))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
