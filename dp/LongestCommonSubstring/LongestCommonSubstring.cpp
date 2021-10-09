#include <iostream>
#include <string>
#include <vector>
using namespace std;

int LCSubStr(string &X, string &Y, int m, int n)
{

  vector<vector<int>> memo(
      m + 1, vector<int>(n + 1, 0));

  int result = 0; // Stores the length of the longest common substring

  for (int i = 0; i <= m; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (i == 0 || j == 0)
        memo[i][j] = 0;

      else if (X[i - 1] == Y[j - 1])
      {
        memo[i][j] = memo[i - 1][j - 1] + 1;
        result = max(result, memo[i][j]);
      }
      else
        memo[i][j] = 0;
    }
  }
  return result;
}

int main()
{
  string x, y;

  cout << "Enter first string: ";
  cin >> x;

  cout << "Enter second string: ";
  cin >> y;

  int m = x.size();
  int n = y.size();

  cout << "Length of Longest Common Substring is "
       << LCSubStr(x, y, m, n);
  return 0;
}
