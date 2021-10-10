#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void matrix_chain_multiplication(vi a)
{
    int n = a.size();
    vector<vi> dp(n, vi(n, 0));
    int i, j, k, l, q;
    for (i = 1; i < n; i++)
        dp[i][i] = 0;
    for (l = 2; l < n; l++)
    {
        for (i = 1; i < n - l + 1; i++)
        {
            j = i + l - 1;
            dp[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                q = dp[i][k] + dp[k + 1][j] + a[i - 1] * a[k] * a[j];
                if (q < dp[i][j])
                    dp[i][j] = q;
            }
        }
    }
    cout << dp[1][n - 1];
    return;
}
int main()
{
    int n;
    cin >> n;
    vi a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    matrix_chain_multiplication(a);
    return 0;
}