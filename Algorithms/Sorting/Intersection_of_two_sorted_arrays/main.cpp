#include<bits/stdc++.h>
using namespace std;

//Print common elements from two sorted array

void naive(int a[], int n1, int b[], int n2){   //O(n1*n2)
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

int main(){
    int n1=4, n2=4;
    int a[] = {1,2,2,3};
    int b[] = {2,2,3,10};
    // naive(a,n1,b,n2);
    efficient(a,n1,b,n2);
    return 0;
}