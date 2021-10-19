import java.util.*;

public class DoubleDimensionalArray{
    /*instance variables*/
    static int arr[][];
    static int m,n;
    static Scanner sc = new Scanner(System.in);

    /* Method to accept and store the values in a 2-D array */
    public static void input(){
        System.out.println("Enter the number of columns: ");
        n = sc.nextInt();
        System.out.println("Enter the number of rows: ");
        m = sc.nextInt();
        System.out.println("Enter the elements column-row wise: ");
        arr = new int[m][n];
        // loop for rows of matrix
        for(int i = 0;i<m;i++){

             // loop for column of matrix
            for(int j = 0;j<n;j++){
                arr[i][j] = sc.nextInt();
            }
        }
    }

    /* Method to display the 2-D array */
    public static void display(){

        // loop for rows of matrix
        for(int i = 0;i<m;i++){

             // loop for column of matrix
            for(int j = 0;j<n;j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    /* Print boundary elements of the 2-D Array */
    public static void printBoundary(){
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i==0 || j==0 || i==(m-1) || j==(n-1)){
                    System.out.print(arr[i][j]+"\t");
                }
                else{
                    System.out.print("\t");
                }
            }
            System.out.println();
        }
    }

    /* Print the lower right side triangle of the 2-D array */
    public static void printRight(){

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if((i+j)>=(n-1)){
                    System.out.print(arr[i][j] + "\t");
                }
                else{
                    System.out.print("\t");
                }
            }
            System.out.println();
        }
    }
    
    /* print the upper left side triangle of the 2-D array */
    public static void printLeft(){

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if((i+j)<=(n-1)){
                    System.out.print(arr[i][j] + "\t");
                }
                else{
                    System.out.print("\t");
                }
            }
            System.out.println();  
        }
    }

    /* Sum of boundary elements of the 2-D Array */
    public static void sumBoundary(){
        int sumB = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i==0 || j==0 || i==(m-1) || j==(n-1)){
                    sumB += arr[i][j];
                }
            }
        }
        System.out.println("The sum of the boundary elements is: " +sumB);
    }

    /* Sum of lower right triangle */
    public static void sumRight(){
        int sumR = 0;

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if((i+j)==(n-1)){
                    sumR += arr[i][j];
                }
            }
        }
        System.out.println("The sum of the elements on the lower right side of the 2-D array is: "+sumR);
    }

    /* Sum of the upper left triangle */
    public static void sumLeft(){
        int sumL = 0;

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if((i+j)<(n-1)){
                    sumL += arr[i][j];
                }
            }
        }
        System.out.println("The sum of the elements on the upper left side of the 2-D array is: "+sumL);
    }

    public static void sort(){
        int i, j, temp;

        for (i = 0; i < n * m - 1; ++i) {
            for (j = 0; j < n * m - 1 - i; ++j) {
                // row = j/n
                // column = j%n
                if (arr[j / n][j % n] > arr[(j + 1) / n][(j + 1) % n]) {

                    temp = arr[(j + 1) / n][(j + 1) % n];
                    arr[(j + 1) / n][(j + 1) % n] = arr[j / n][j % n];
                    arr[j / n][j % n] = temp;

                }
            }
        }
    }

    public static void main(String args[]){
        int choice = 0;
        while(choice != 10){
            System.out.println();
            System.out.println("Enter 1 to enter the elements of the 2-D array");
            System.out.println("Enter 2 to display the 2-D array");
            System.out.println("Enter 3 to print the boundary of the 2-D array");
            System.out.println("Enter 4 to print the upper left trianlge of the 2-D array");
            System.out.println("Enter 5 to print the lower right triangle of the 2-D array");
            System.out.println("Enter 6 to print the sum of the elements in the boundary of the 2-D array");
            System.out.println("Enter 7 to print the sum of the elements in the upper left triangle of the 2-D array");
            System.out.println("Enter 8 to print the sum of the elements in the lower right triangle of the 2-D array");
            System.out.println("Enter 9 to print and display sorted 2-D array");
            System.out.println("Enter 10 to EXIT");
            choice = sc.nextInt();
            switch(choice){
                case 1: 
                    input();
                    break;
                case 2: 
                    System.out.println("Double Dimensional Array: ");
                    display();
                    break;
                case 3:
                    System.out.println("The boundary elements: ");
                    printBoundary();
                    break;
                case 4:
                    System.out.println("The upper left triangle: ");
                    printLeft();
                    break;
                case 5:
                    System.out.println("The lower right triangle: ");
                    printRight();
                    break;
                case 6: 
                    sumBoundary();
                    break;
                case 7: 
                    sumLeft();
                    break;
                case 8: 
                    sumRight();
                    break;
                case 9:
                    sort();
                    System.out.println("The array after sorting: ");
                    display();
                    break;
                default:
                    break;
            }
        }
        System.out.println("Thank You :)");
    }
}