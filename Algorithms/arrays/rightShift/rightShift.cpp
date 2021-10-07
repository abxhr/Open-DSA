#include<bits/stdc++.h>
using namespace std;

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

int main() {
    int i,d,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
       cin>>a[i]; 
    cin>>d;
    rightShift(a,n,d);
    return 0;
}