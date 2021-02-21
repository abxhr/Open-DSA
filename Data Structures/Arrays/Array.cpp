#include <iostream>

using namespace std;

bool index_out_of_bounds(int i, int n){
    return ((i >= n) || (i < 0));
}

void access(int arr[], int i, int n){
    if (index_out_of_bounds(i, n)){
        cout << "Array index out of bounds!" << endl;
        return;
    }
    cout << "Element: " << arr[i] << endl;
}

void linearsearch(int arr[], int x, int n){
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            cout << "Element found at index " << i << endl;
            return ;
        }
    }
    cout << "Element not found in array!" << endl;
}

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
    cout << "Array Sorted!" << endl;
}

void display(int arr[], int n){
    cout << "Array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int q = 1;
    do{
        cout << endl;
        cout << "1. Access Element" << endl;
        cout << "2. Search Element" << endl;
        cout << "3. Sort Array" << endl;
        cout << "4. Display array" << endl;
        cout << "5. Exit" << endl;
        cout << endl;
        cout << "Enter your query: ";
        cin >> q;
        switch(q){
            case 1:{
                int i;
                cout << "Enter index: ";
                cin >> i;
                access(arr, i, n);
                break;
            }
            case 2:{
                int x;
                cout << "Enter element: ";
                cin >> x;
                linearsearch(arr, x, n);
                break;
            }
            case 3:{
                selectionSort(arr, n);
                break;
            }
            case 4:{
                display(arr, n);
                break;
            }
            case 5:{
                exit(1);
                break;
            }
            default:{
                cout << "Enter a valid operation!" << endl;
            }
        }
    }while(q != 5);
    return 0;
}