# Frequency of occurence of an element in an sorted array

## Method 1 (NAIVE) 
Time: ![formula](https://render.githubusercontent.com/render/math?math=O(n*n))

```
void frequency1(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" : ";
        int count = 1;
        for(int j=i+1; j<n;j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        i+=(count-1);
        cout<<count<<endl;
    }
}
```

## Method 2 
Time: ![formula](https://render.githubusercontent.com/render/math?math=O(n))

```
void frequency2(int arr[], int n){
    int freq=1,i=1;
    while(i<n){
        while(i<n && arr[i] == arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" : "<<freq<<endl;
        i++;
        freq = 1;
    }
    if(n==1 || arr[n-1] != arr[n-2]){
        cout<<arr[n-1]<<" : "<<1<<endl;
    }
}
```