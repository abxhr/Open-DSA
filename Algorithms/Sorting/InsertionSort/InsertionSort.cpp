#include <iostream>

using namespace std;

void insertionSort (int arr[], int n){
    int key;
    for (int i = 0; i < n; i++){
        key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void displayArray(int arr[], int n){
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
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Array before sort: " << endl;
    displayArray(arr, n);
    cout << "Array after sort: " << endl;
    insertionSort(arr, n);
    displayArray(arr, n);
    return 0;
}