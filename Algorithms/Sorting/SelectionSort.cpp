#include <iostream>

using namespace std;

void swap(int *first, int *second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

void selectionSort(int arr[], int n){
    int min_index;
    for (int i = 0; i < n-1; i++){
        min_index = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

void printArray(int arr[], int n){
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
    cout << "Array before sort: ";
    printArray(arr, n);
    cout << "Array after sort: ";
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}