# Right shift algorithm

Time: ![formula](https://render.githubusercontent.com/render/math?math=O(n))
Space: ![formula](https://render.githubusercontent.com/render/math?math=O(n))

```
void rightShift(int a[], int n, int d){
    int i, b[n];
    for(i=0;i<n;i++){
        if(i+d>=n)
            b[i+d-n]=a[i]; 
        else
            b[i+d]=a[i];
    }
    for(i=0;i<n;i++)
        a[i] = b[i];
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
```
