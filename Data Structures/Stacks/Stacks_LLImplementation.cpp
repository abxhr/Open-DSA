#include <iostream>
#include <cstdlib>

using namespace std;

struct Node{                                        // Structure of the node
    int val;
    struct Node* next;
};

struct Node* top;
int ssize = 0;                                      // Number of nodes in stack

bool isEmpty(){
    return top == NULL;
}

void push(int val){
    struct Node* temp;
    temp = new Node();

    if (!temp){
        cout << "Stack Overflow!" << endl;
    }

    else{
        temp->val = val;
        temp->next = top; 
        top = temp;
        cout << val << " pushed!" << endl;
        ssize++;
    }
}

void pop(){
    struct Node* temp;
    
    if (isEmpty()){
        cout << "Stack Underflow!" << endl;
    }

    else{
        temp = top;
        int data = temp->val;
        top = top->next;
        temp->next = NULL;
        free(temp);
        cout << data << " popped!" << endl;
        ssize--;
    }
}

void StackTop(){
    if (isEmpty()){
        cout << "Stack Underflow!" << endl;
    }
    else{
        cout << "Element at top: " << top->val << endl;
    }
}

void StackSize(){
    cout << "Stack Size: " << ssize <<endl;

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
