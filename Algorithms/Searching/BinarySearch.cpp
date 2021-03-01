#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int val){
    int start = 0;
    int end = n - 1;
    while (start <= end){
        int mid = start + (end - start) / 2;
        if (arr[mid] == val){
            return mid;
        }
        if (arr[mid] < val){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element to search: ";
    cin >> x;
    int index = binarySearch(arr, n, x);
    if (index >= 0){
        cout << "Element at " << index << endl;
    }
    else{
        cout << "Element not found!" << endl;
    }
    return 0;
}