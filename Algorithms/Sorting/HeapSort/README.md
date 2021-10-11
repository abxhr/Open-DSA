# Heap Sort

Sorting Algorithm

## Implementation
- Check [this](Heap_Sort.cpp) to look at a how heap algorithm works.

## Note
- You must know complete binary tree and heap data structure

## Working of a Heap sort
- Since the tree satisfies Max-Heap property, then the largest item is stored at the root node.
- Swap: Remove the root element and put at the end of the array (nth position) Put the last item of the tree (heap) at the vacant place.
- Remove: Reduce the size of the heap by 1.
- Heapify: Heapify the root element again so that we have the highest element at root.
- The process is repeated until all the items of the list are sorted.
 
  ## Complexity
- Time:
    -  Best: O(nlog n)
         
    -  Worst: O(nlog n)
         
    -  Average: O(nlog n)
         
- Space:  O(1)
     

## Applications
- Systems concerned with security and embedded systems such as Linux Kernel use Heap Sort because of the O(n log n) upper bound on Heapsort's running time and constant O(1)   upper bound on its auxiliary storage.
-  heap, can be efficiently used if we want to extract the smallest (or largest) from the list of items without the overhead of keeping the remaining items in the sorted order. For e.g Priority Queues.


