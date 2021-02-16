# Sorting

## Selection Sort

### Algorithm
```
selectionsort(array, n):
    for i -> n-1:
        min_index = i
        for j -> n:
            if (array[j] < array[min_index]):
                min_index = j
    swap(array[i], array[min_index])
```

### Complexity
- Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
- Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n^2))
- Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n^2))
