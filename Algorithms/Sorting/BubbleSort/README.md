# [`Bubble Sort`](BubbleSort.cpp)

## Algorithm
```
bubbleSort(array, n):
    for i = 1 -> n-1:
        for j = 1 -> n-i-1:
            if (array[j] > array[j+1]):
                swap(array[j], array[j+1])
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n^2))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))
