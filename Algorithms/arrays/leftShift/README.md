# Left Shift

## METHOD 1 (NAIVE) <br>
Time = O(n*d) 
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

## METHOD 2 <br>
TIME=O(n) <br>
space=O(d)
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

## METHOD 3 <br>
time=O(n) <br>
space O(1)
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