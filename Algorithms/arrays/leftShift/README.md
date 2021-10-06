<<<<<<< HEAD
# Left Shift algorithms
=======
# Left Shift
>>>>>>> 7fef0f80c0320aa55de9bae3faf9c0d13675f06c

## Method 1 (NAIVE) 
Time: ![formula](https://render.githubusercontent.com/render/math?math=O(n*d))

```
void leftRotate(int arr[], int n, int d){       
    while(d--){
        int temp = arr[0];
        for(int i=1; i<n;i++)
            arr[i-1] = arr[i];
        arr[n-1] = temp;
    }
}
```

## Method 2 
Time: ![formula](https://render.githubusercontent.com/render/math?math=O(n))
Space: ![formula](https://render.githubusercontent.com/render/math?math=O(d))

```
void leftRotate2(int arr[], int n, int d){    
    int temp[d];
    //copy first d elements to d
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }
    //leftRotate next (n-d) elements d times
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }
    //copy ele from temp to arr from d+1 pos to end 
    for(int i=0; i<d; i++){
        arr[n-d+i] = temp[i];
    }
}
```

## Method 3 
Time: ![formula](https://render.githubusercontent.com/render/math?math=O(n))
Space: ![formula](https://render.githubusercontent.com/render/math?math=O(1))

```
void reverseArr(int arr[], int start, int end){  // 
    while(end > start){
        swap(arr[end], arr[start]);
        end--;
        start++;
    }
}
void leftRotate3(int arr[], int n, int d){
    reverseArr(arr,0,d-1);
    reverseArr(arr,d,n-1);
    reverseArr(arr,0,n-1);
}
```