
#include <iostream>
#include <vector>

using namespace std;

int unbounded_knapsack(vector<int> &val, vector<int> &w, int n, int W,
                       vector<vector<int>> &memo)
{
  // Base condition
  if (n == 0 || W == 0)
    return 0; // No profit made

  // Check memo once before making recursive calls
  if (memo[n][W] != -1)
    return memo[n][W];

  // Store result in memo instead of returning it directly
  if (w[n - 1] <= W)
    memo[n][W] =
        max(val[n - 1] + unbounded_knapsack(val, w, n, W - w[n - 1], memo),
            unbounded_knapsack(val, w, n - 1, W, memo));
  else
    memo[n][W] = unbounded_knapsack(val, w, n - 1, W, memo);

  return memo[n][W]; // And then return memo
}

int main()
{

  int W; // Capacity of knapsack
  int n; // Count of items

  cout << "Enter the size of the array: ";
  cin >> n;

  vector<int> val(n);
  vector<int> w(n);

  cout << "Enter value array: ";
  for (int i = 0; i < n; i++)
    cin >> val[i];

  cout << "Enter weight array: ";
  for (int i = 0; i < n; i++)
    cin >> w[i];

  cout << "Enter capacity of Knapsack: ";
  cin >> W;

  // Memoize
  vector<vector<int>> memo(
      n + 1, vector<int>(W + 1, -1)); // Initialize all values with -1

  cout << "Maximum profit: " << unbounded_knapsack(val, w, n, W, memo) << "\n";

  return 0;
}