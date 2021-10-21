#include <iostream>
using namespace std;

/* Method to display the 2-D array */
void display(int n, int m, int a[4][4]){

    // loop for rows of matrix
    for(int i = 0;i<n;i++){
            // loop for column of matrix
        for(int j = 0;j<m;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

/* Print boundary elements of the 2-D Array */
void printBoundary(int n, int m, int a[4][4]){
        
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(i==0 || j==0 || i==(m-1) || j==(n-1)){
                cout<<a[i][j]<<"\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
}

/* print the upper left side triangle of the 2-D array */
void printLeft(int n, int m, int a[4][4]){

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if((i+j)<=(n-1)){
                cout<<a[i][j]<<"\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<"\n";  
    }
}

/* Print the lower right side triangle of the 2-D array */
void printRight(int n, int m, int a[4][4]){

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if((i+j)>=(n-1)){
                cout<<a[i][j]<<"\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
}

/* Sum of boundary elements of the 2-D Array */
void sumBoundary(int n, int m, int a[4][4]){
    int sumB = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(i==0 || j==0 || i==(m-1) || j==(n-1)){
                sumB += a[i][j];
            }
        }
    }
    cout<<"The sum of the boundary elements is: " << sumB<<"\n";
}

/* Sum of the upper left triangle */
void sumLeft(int n, int m, int a[4][4]){
    int sumL = 0;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if((i+j)<(n-1)){
                sumL += a[i][j];
            }
        }
    }
    cout<<"The sum of the elements on the upper left side of the 2-D array is: "<<sumL<<"\n";
}

/* Sum of lower right triangle */
void sumRight(int n, int m, int a[4][4]){
    int sumR = 0;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if((i+j)==(n-1)){
                sumR += a[i][j];
            }
        }
    }
    cout<<"The sum of the elements on the lower right side of the 2-D array is: "<<sumR<<"\n";
}

void sort(int n, int m, int a[4][4]){
    int i, j, temp;

    for (i = 0; i < n * m - 1; ++i) {
        for (j = 0; j < n * m - 1 - i; ++j) {
            // row = j/n
            // column = j%n
            if (a[j / n][j % n] > a[(j + 1) / n][(j + 1) % n]) {

                temp = a[(j + 1) / n][(j + 1) % n];
                a[(j + 1) / n][(j + 1) % n] = a[j / n][j % n];
                a[j / n][j % n] = temp;

            }
        }
    }
}

int main(){
    int arr[4][4] = {
        {78, 67, 54, 97},
        {34, 41, 23, 1},
        {90, 59, 82, 20},
        {12, 24, 18, 65}
    };
    
    int choice = 0;
    while(choice != 10){
        cout<<"\n";
        cout<<"Enter 1 to display the 2-D array"<<"\n";
        cout<<"Enter 2 to print the boundary of the 2-D array"<<"\n";
        cout<<"Enter 3 to print the upper left trianlge of the 2-D array"<<"\n";
        cout<<"Enter 4 to print the lower right triangle of the 2-D array"<<"\n";
        cout<<"Enter 5 to print the sum of the elements in the boundary of the 2-D array"<<"\n";
        cout<<"Enter 6 to print the sum of the elements in the upper left triangle of the 2-D array"<<"\n";
        cout<<"Enter 7 to print the sum of the elements in the lower right triangle of the 2-D array"<<"\n";
        cout<<"Enter 8 to print and display sorted 2-D array"<<"\n";
        cout<<"Enter 9 to EXIT"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"The 2-D Array is: "<<"\n";
                display(4,4,arr);
                break;
            case 2:
                cout<<"The boundary elements of the 2-D Array: "<<"\n";
                printBoundary(4,4,arr);
                break;
            case 3:
                cout<<"The upper left triangle: "<<"\n";
                printLeft(4,4,arr);
                break;
            case 4:
                cout<<"The lower right triangle: "<<"\n";
                printRight(4,4,arr);
                break;
            case 5:
                sumBoundary(4,4,arr);
                break;
            case 6: 
                sumLeft(4,4,arr);
                break;
            case 7: 
                sumRight(4,4,arr);
                break;
            case 8:
                sort(4,4,arr);
                cout<<"The array after sorting: "<<"\n";
                display(4,4,arr);
                break;
            default:
                break;
        }
    }

    cout<<"Thank You.";

}