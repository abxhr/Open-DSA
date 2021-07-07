#include <iostream>

using namespace std;

void merge (int arr[], int start, int mid, int end){
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++){
        left[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++){
        right[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = start;
    
    while ((i < n1) && (j < n2)){
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort (int arr[], int start, int end){
    if (start >= end){
        return ;
    }
    int mid = start + (end - start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

void display (int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;
    cout << "Array before sort: " << endl;
    display(arr, n);
    cout << endl;
    mergeSort(arr, 0, n-1);
    cout << "Array  after sort: " << endl;
    display(arr, n);
    return 0;
}