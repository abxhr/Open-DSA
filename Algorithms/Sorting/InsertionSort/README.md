# [`Insertion Sort`](InsertionSort.cpp)

## Algorithm
```
insertionSort(array, n):
    for i = 2 -> n:
        key = array[i]
        j = i - 1
        while j > 0 and array[j] > key:
            array[j+1] = array[j]
            j = j - 1
        array[j+1] = key
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n^2))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))