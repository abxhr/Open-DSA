#include <iostream>
#include <vector>

using namespace std;

int rod_cut(vector<int> &price, vector<int> &length, int n, int N,
            vector<vector<int>> &memo)
{
  // Base condition
  if (n == 0 || N == 0)
    return 0; // No profit made

  // Check memo once before making recursive calls
  if (memo[n][N] != -1)
    return memo[n][N];

  // Store result in memo instead of returning it directly
  if (length[n - 1] <= N)
    memo[n][N] =
        max(price[n - 1] + rod_cut(price, length, n, N - length[n - 1], memo),
            rod_cut(price, length, n - 1, N, memo));
  else
    memo[n][N] = rod_cut(price, length, n - 1, N, memo);

  return memo[n][N]; // And then return memo
}

int main()
{
  int n;
  cout << "Enter the length of the rod: ";
  cin >> n;

  vector<int> price(n);
  vector<int> length(n);

  cout << "Enter value array for each length: ";
  for (int i = 0; i < n; i++)
    cin >> price[i];

  for (int i = 0; i < n; i++)
    length[i] = i + 1;

  int N = n; // maximum length of the rod

  vector<vector<int>> memo(
      n + 1, vector<int>(N + 1, -1)); // Initialize all values with -1

  cout << "Maximum profit: " << rod_cut(price, length, n, N, memo) << "\n";

  return 0;
}