#include<bits/stdc++.h>
using namespace std;



void naive(int a[], int n1, int b[], int n2){  
    int c[n1+n2];
    for(int i=0; i<n1; i++){    
        c[i] = a[i];
    }
    for(int i=0; i<n2; i++){    
        c[n1+i] = b[i];
    }
    sort(c,c+(n1+n2));  
    for(int i=0; i<n1+n2; i++){
        if(i==0 || c[i]!=c[i-1])
            cout << c[i] << " ";
    }
}

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



int main(){
    int n1=4, n2=4;
    int a[] = {1,2,2,3};
    int b[] = {2,2,3,10};
    // naive(a,n1,b,n2);
    efficient(a,n1,b,n2);
    return 0;
}