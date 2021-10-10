# [`Maximum Product Subarray`](MaximumProductSubarray.cpp)

## Algorithm
```
max_product_subarray(a)
    n=a.size()
    min_v=a[0]
    max_v=a[0]
    max_prod=a[0]
    for i=1 -> n
        if a[i]<0
            swap(max_v,min_v)
        max_v=max(a[i],max_v*a[i])
        min_v=min(a[i],min_v*a[i])
        max_prod=max(max_prod,max_v)
    return max_prod
}
```

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))
