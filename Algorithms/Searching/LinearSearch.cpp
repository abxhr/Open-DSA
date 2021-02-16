#include <iostream>

using namespace std;

int linearsearch(int arr[], int x, int n){
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the values of the array: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element to search: ";
    cin >> x;
    int index = linearsearch(arr, x, n);
    if (index == -1){
        cout << x << " is not present in the array" << endl;
    }
    else{
        cout << x << " is present at the index " << index << endl;
    }
    return 0;
}