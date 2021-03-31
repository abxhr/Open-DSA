#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];                               // Considering the first element as the pivot
    int i = low;
    int j = high;
    while (i < j){
        do{
            i++;
        }while(arr[i] <= pivot);

        do{
            j--;
        }while(arr[j] > pivot);
        if (i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);              // Partition Index
        quickSort(arr, low, pi);                         // Before pi
        quickSort(arr, pi + 1, high);                      // After pi
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
    quickSort(arr, 0, n);
    displayArray(arr, n);
    return 0;
}