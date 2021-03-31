# Sorting

## [`Selection Sort`](SelectionSort.cpp)

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

## [`Bubble Sort`](BubbleSort.cpp)

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

## [`Insertion Sort`](InsertionSort.cpp)

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


## [`Merge Sort`](MergeSort.cpp)

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


## [`Quick Sort`](QuickSort/QuickSort.cpp)

### Algorithm
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

### Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(nlog(n)))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(nlog(n)))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(log(n)))
