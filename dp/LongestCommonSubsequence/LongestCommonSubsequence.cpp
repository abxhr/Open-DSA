#include <iostream>
#include <string>
#include <vector>

using namespace std;

int lcs(string &x, string &y, int n, int m, vector<vector<int>> &memo)
{
  // Base case
  if ((n == 0) or (m == 0))
    return 0;

  // Check memo once before making recursive calls
  if (memo[n][m] != -1)
    return memo[n][m];

  if (x[n - 1] == y[m - 1])
    memo[n][m] = 1 + lcs(x, y, n - 1, m - 1, memo);
  else
    memo[n][m] = max(lcs(x, y, n - 1, m, memo), lcs(x, y, n, m - 1, memo));

  return memo[n][m];
}

int main()
{
  string x, y;
  cout << "Enter first string: ";
  cin >> x;

  cout << "Enter second string: ";
  cin >> y;

  int n = x.size();
  int m = y.size();

  vector<vector<int>> memo(
      n + 1, vector<int>(m + 1, -1)); // Initialize all values with -1

  cout << lcs(x, y, n, m, memo) << "\n";
  return 0;
}