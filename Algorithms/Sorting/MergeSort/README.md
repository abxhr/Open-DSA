# [`Merge Sort`](MergeSort.cpp)

## Algorithm
```
mergeSort(array, int start, int end):
    if (start >= end){
        return
    }
    mid = (start + end)/2
    mergeSort (arr, start, mid)
    mergeSort (arr, mid+1, end)
    merge (arr, start, mid, end)
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(nlog(n)))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(nlog(n)))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(nlog(n)))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n))