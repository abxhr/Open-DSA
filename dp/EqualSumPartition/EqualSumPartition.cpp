#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool subsetSum(vector<int> &v, int n, int sum, vector<vector<int>> &memo)
{
  // Base condition

  // We can return empty set
  if (sum == 0)
    return true;

  if (n == 0)
    return false;

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

bool equal_sum_partition(vector<int> &v, int n)
{

  // Get the sum of the array
  int sum = accumulate(v.begin(), v.end(), 0);

  // If sum is odd
  if (sum & 1)
    return false;

  // If sum is even
  sum = sum / 2;

  // Apply subset sum as subroutine
  vector<vector<int>> memo(
      n + 1, vector<int>(sum + 1, -1)); // Initialize all values with -1

  if (subsetSum(v, n, sum, memo))
    return true;

  return false;
}

int main()
{
  int n, sum;
  cout << "Enter the size of the array: ";
  cin >> n;

  vector<int> v(n);
  cout << "Enter Elements of array: ";
  for (int i = 0; i < n; i++)
    cin >> v[i];

  cout << "Enter Sum: ";
  cin >> sum;

  if (equal_sum_partition(v, n))
    cout << "Equal sum partition found\n";
  else
    cout << "No such partition found\n";

  return 0;
}