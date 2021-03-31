# [`Quick Sort`](QuickSort.cpp)

## Algorithm
```
quickSort(array, low, high):
    if (low < high){
        pi = partition(array, low, high);
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }

partition(arr, low, high):
    pivot = array[low];
    i = low;
    j = high;
    while (i < j){
        do{
            i += 1;
        } while(array[i] <= pivot);
        do{
            j += 1;
        } while(array[j] > pivot);
        if (i < j){
            swap(array[i], array[j]);
        }
    }
    swap(array[low], array[j]);
    return j;
```

## Complexity

- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(nlog(n)))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(nlog(n)))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(log(n)))