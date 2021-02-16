#include <iostream>

using namespace std;

struct node{
    int val;
    node* next;
    node(int x){
        val = x;
        next = NULL;
    }
};

node *front = NULL;
node *rear = NULL;

int qsize = 0;

bool isEmpty(){
    return front == NULL;
}

void enqueue(int val){
    node* temp;
    temp = new node(val);
    qsize++;

    cout << val << " enqueued!" << endl;

    if (isEmpty()){
        front = rear = temp;
        return;
    }

    rear->next = temp;
    rear = temp;
}

void dequeue(){
    if (isEmpty()){
        cout << "Queue underflow!" << endl;
        return;
    }

    node* temp = front;
    int data = temp->val;
    front = front -> next;

    if (front == NULL){
        rear = NULL;
    }
    qsize--;
    cout << data << " dequeued!" << endl;
}

void frontElement(){
    if (isEmpty()){
        cout << "Queue underflow!" << endl;
        return;
    }
    cout << "Front: " << front->val << endl;
}

void rearElement(){
    if (isEmpty()){
        cout << "Queue underflow!" << endl;
        return;
    }
    cout << "Rear: " << rear->val << endl;
}

void queueSize(){
    cout << "Size: " << qsize << endl;
}

void display(){
    cout << "Queue: ";
    node* temp = front;
    if (temp == NULL){
        cout << "NULL!" << endl;
        return;
    }
    
    while(temp){
        int data = temp->val;
        cout << data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    int q = 1;
    while(q != 7){
        cout << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Rear" << endl;
        cout << "5. Size" << endl;
        cout << "6. Display" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your query: ";
        cin >> q;
        switch(q){
            case 1:{
                int val;
                cout << "Enter the value: ";
                cin >> val;
                enqueue(val);
                break;
            }

            case 2:{
                dequeue();
                break;
            }

            case 3:{
                frontElement();
                break;
            }

            case 4:{
                rearElement();
                break;
            }

            case 5:{
                queueSize();
                break;
            }

            case 6:{
                display();
                break;
            }

            case 7:{
                exit(0);
                break;
            }

            default:{
                cout << "Enter a valid operation!" << endl;
            }
        }
    }
    return 0;
}