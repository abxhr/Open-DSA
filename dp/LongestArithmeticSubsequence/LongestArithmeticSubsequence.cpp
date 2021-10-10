#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void longest_arithmetic_sequence(vi a)
{
    int res = 2;
    int n = a.size();
    if (n <= 2)
    {
        cout << n;
        return;
    }
    vi dp(n, 2);
    sort(a.begin(), a.end());
    for (int i = n - 2; i >= 0; i--)
    {
        int j = i - 1, k = i + 1;
        while (j >= 0 && k < n)
        {
            if (a[j] + a[k] == 2 * a[i])
            {
                dp[i] = max(dp[k] + 1, dp[j]);
                res = max(res, dp[i]);
                j -= 1;
                k += 1;
            }
            else if (a[j] + a[k] < 2 * a[i])
                k += 1;
            else
                j -= 1;
        }
    }
    cout << res;
    return;
}

int main()
{
    int n;
    cin >> n;
    vi a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    longest_arithmetic_sequence(a);
    return 0;
}