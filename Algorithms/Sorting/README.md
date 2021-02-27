# Sorting

## Selection Sort

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

## Bubble Sort

### Algorithm
```
bubbleSort(array, n):
    for i = 1 -> n-1:
        for j = 1 -> n-i-1:
            if (array[j] > array[j+1]):
                swap(array[j], array[j+1])
```

### Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n^2))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))

## Insertion Sort

## Algorithm
```
insertionSort(array, n):
    for i = 2 -> n:
        key = array[i]
        j = i - 1;
        while j > 0 and array[j] > key:
            array[j+1] = array[j]
            j = j - 1;
        array[j+1] = key
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n^2))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))