# [`Selection Sort`](SelectionSort.cpp)

### Algorithm
```
selectionSort(array, n):
    for i = 1 -> n-1:
        min_index = i
        for j = i+1 -> n:
            if (array[j] < array[min_index]):
                min_index = j
    swap(array[i], array[min_index])
```

### Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n^2))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n^2))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))