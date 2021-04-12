## Binary Search

### Algorithm:
```
binarySearch(array, size, element):
    start = 0
    end = size - 1
    while (start <= end){
        mid = start + (end - start) / 2;
        if (array[mid] == element){
            return mid
        }
        if (array[mid] < element){
            start = mid + 1
        }
        else {
            end = mid - 1;
        }
    }
    return -1
```

### Complexity:
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(log n))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=O(log n))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))