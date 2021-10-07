#include <iostream>
#include <vector>

using namespace std;

bool subsetSum(vector<int> &v, int n, int sum, vector<vector<int>> &memo)
{
  // Base condition

  // We can return empty set
  if (sum == 0)
    return true;

  if (n == 0)
    return false;

  // If both n and sum are zero still the answer is true as we can return empty
  // set This case is handled by sum == 0 condition and that's why it is written
  // above n == 0 condition.

  // Check memo once before making recursive calls
  if (memo[n][sum] != -1)
    return memo[n][sum];

  // Store result in memo instead of returning it directly
  if (v[n - 1] <= sum)
    memo[n][sum] = subsetSum(v, n - 1, sum - v[n - 1], memo) or
                   subsetSum(v, n - 1, sum, memo);
  else
    memo[n][sum] = subsetSum(v, n - 1, sum, memo);

  return memo[n][sum]; // And then return memo
}

int main()
{
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  vector<int> v(n);

  cout << "Enter elements of array: ";
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int sum;

  cout << "Enter the target sum: ";
  cin >> sum;

  vector<vector<int>> memo(
      n + 1, vector<int>(sum + 1, -1)); // Initialize all values with -1

  if (subsetSum(v, n, sum, memo))
    cout << "Subset found with sum " << sum << "\n";
  else
    cout << "No such subset found\n";

  return 0;
}