#include <iostream>

#define SIZE 150

using namespace std;

int stack[SIZE], top = -1;                          // Initialise a stack of SIZE = 150 and top = -1 

bool isEmpty(){
    if (top == -1)
        return true;
    else 
        return false;
}

bool isFull(){
    if (top >= SIZE - 1)
        return true;
    else
        return false;
}

void push(int val){
    if (isFull()) 
        cout << "Stack overflow!" << endl;
    else{
        stack[++top] = val;
        cout << "Element Pushed!" << endl;
    }
}

void pop(){
    if (isEmpty())
        cout << "Stack underflow!" << endl;
    else{
        int val = stack[top--];
        cout << val << " Popped!" << endl;
    }
}

void StackTop(){
    if (isEmpty())
        cout << "Stack underflow!" << endl;
    else 
        cout << "Element at top: " << stack[top] << endl;
}

void StackSize(){
    cout << "Stack Size: " << top + 1 << endl;
}

int main(){
    int q = 1;
    while(q != 5){
        cout << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Size" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your query: ";
        cin >> q;
        switch(q){
            case 1:{
                int val;
                cout << "Enter the value: ";
                cin >> val;
                push(val);
                break;
            }

            case 2:{
                pop();
                break;
            }

            case 3:{
                StackTop();
                break;
            }

            case 4:{
                StackSize();
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
    }
    return 0;
}