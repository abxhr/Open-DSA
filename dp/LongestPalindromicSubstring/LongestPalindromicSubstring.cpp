#include <bits/stdc++.h>
using namespace std;

void longest_palindrome(string s)
{
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    int max_len = 1;
    for (int i = 0; i < n; i++)
        dp[i][i] = 1;
    int start = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            dp[i][i + 1] = 1;
            start = i;
            max_len = 2;
        }
    }
    for (int k = 3; k <= n; k++)
    {
        for (int i = 0; i < n - k + 1; i++)
        {
            int j = i + k - 1;
            if (dp[i + 1][j - 1] && s[i] == s[j])
            {
                dp[i][j] = 1;
                if (k > max_len)
                {
                    start = i;
                    max_len = k;
                }
            }
        }
    }
    for (int i = start; i <= start + max_len - 1; i++)
        cout << s[i];
    return;
}

int main()
{
    string s;
    cin >> s;
    longest_palindrome(s);
    return 0;
}