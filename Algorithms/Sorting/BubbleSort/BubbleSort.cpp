#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    for (int i =0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
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
    bubbleSort(arr, n);
    displayArray(arr, n);
    return 0;
}