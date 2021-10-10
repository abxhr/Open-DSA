# [`Union of two sorted arrays`](Union_of_two_sorted_arrays)


### Task : Given two sorted arrays print union od two sorted arrays

### Algorithm
1. Naive
```
void naive(int a[], int n1, int b[], int n2){   //Time= space=
    int c[n1+n2];
    for(int i=0; i<n1; i++){    //O(n1)
        c[i] = a[i];
    }
    for(int i=0; i<n2; i++){    //O(n2)
        c[n1+i] = b[i];
    }
    sort(c,c+(n1+n2));  //O(log(n1+n2))
    for(int i=0; i<n1+n2; i++){
        if(i==0 || c[i]!=c[i-1])
            cout << c[i] << " ";
    }
}
```
    
### Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(sum(n1,n2)*log(sum(n1,n2)))) where n1 and n2 are size of two arrays
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(sum(n1,n2)))

<hr><hr>

2. Efficient
```
void efficient(int a[], int n1, int b[], int n2){   
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1]){
            j++;
            continue;
        }
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }else if(a[i]>b[j]){
            cout<<b[j]<<" ";
            j++;
        }else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n1){
        if(i>0 && a[i]!=a[i-1]){
            cout<<a[i]<<" ";
            i++;
        }
    }
    while(j<n2){
        if(j>0 && b[j]!=b[j-1]){
            cout<<b[j]<<" ";
            j++;
        }
    }
}
```
### Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(sum(n1,n2))) where n1 and n2 are size of two arrays
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))

