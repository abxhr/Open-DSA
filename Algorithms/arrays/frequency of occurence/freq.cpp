#include <iostream>
using namespace std;

//NAIVE O(n*n)
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

//theta(n)
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

int main(){
    int arr[] = {10,10,10,25,30,30};
    int n = 6;
    frequency1(arr,n);
    cout<<endl;
    frequency2(arr,n);
    return 0;
}