#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int kth_largest_element(vector<int> arr, int k)
{
  priority_queue<int, vector<int>, greater<int>> minH;
  int n = arr.size();

  // if the input is invalid
  if (n < k || k < 1)
    return -1;

  // insert initial k elements into the heap
  for (int i = 0; i < k; i++)
    minH.push(arr[i]);

  // now remove the top element after inserting each element
  for (int i = k; i < n; i++)
  {
    minH.push(arr[i]);
    minH.pop();
  }

  // return the top element of the heap
  return minH.top();
}

int main(){
  vector<int> arr = {10,12,13,15,48};
  int k = 4;
  cout << kth_largest_element(arr, k) << endl;
}