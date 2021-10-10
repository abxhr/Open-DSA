# [Intersection of two sorted arrays](Intersection_of_two_sorted_arrays)


### Task : To print common elements from two sorted arrays

### Algorithm
1. Naive
```
void naive(int a[], int n1, int b[], int n2){   
    for(int i=0;i<n1;i++){
        if(i > 0 && a[i] == a[i-1])
            continue;
        for(int j=0; j<n2; j++){
            if(a[i] == b[j]){
                cout << a[i] <<" ";
                break;
            } 
        }
    }
}
```
    
### Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n1*n2)) where n1 and n2 are size of two arrays
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))

<hr><hr>

2. Efficient
```
void efficient(int a[], int n1, int b[], int n2){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(i>0 && a[i] == a[i-1]){
            i++;
            continue;
        }
        if(a[i] == b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
        }else if(a[i] > b[j]){
            j++;
        }else{
            i++;
        }
    }
}
```
### Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(sum(n1,n2))) where n1 and n2 are size of two arrays
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))

