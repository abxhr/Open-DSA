# [`Kth Largest Element in an Unsorted Array`](kth_largest_element.cpp)

## Algorithm
```
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
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n*log(k)))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n*log(k)))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n*log(k)))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(k))
