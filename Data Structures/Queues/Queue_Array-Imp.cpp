#include <iostream>

#define SIZE 150
using namespace std;

int queue[SIZE];
int front = -1;
int rear = -1;

bool IsEmpty(){
    return (front == -1 && rear == -1);
}

bool IsFull(){
    return (rear + 1) % SIZE == front;
}

void enqueue(int val){
    if (IsFull()){
        cout << "Queue overflow!" << endl;
        return;
    }
    else{
        if (IsEmpty()){
            front = rear = 0;
        }
        else
            rear = (rear + 1) % SIZE;
        queue[rear] = val;
        cout << val << " enqueued!" << endl;
    }
}

void dequeue(){
    if (IsEmpty()){
        cout << "Queue underflow!" << endl;
        return;
    }
    else{
        cout << queue[front] << " dequeued!" << endl;
        if (front == rear)
            rear = front = -1;
        else
            front = (front + 1) % SIZE;
    }    
}

void FrontElement(){
    if (IsEmpty()){
        cout << "Queue underflow!" << endl;
    }
    else{
        cout << "Front: " << queue[front] << endl;
    }
}

void RearElement(){
    if (IsEmpty()){
        cout << "Queue underflow!" << endl;
    }
    else{
        cout << "Rear: " << queue[rear] << endl;
    }
}

void QueueSize(){
    int length;
    if ((rear == -1) && (front == -1)){
        length = 0;
    }
    else{
        length = (rear + SIZE - front) % SIZE + 1;
    }
    cout << "Size: " << length << endl;
}

void display(){
    cout << "Queue: ";
    if ((rear == -1) && (front == -1)){
        cout << "NULL";
    }
    else{
        int length = (rear + SIZE - front) % SIZE + 1;
        for (int i = 0; i < length; i++){
            cout << queue[(front + i) % SIZE] << " ";
        }
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
                FrontElement();
                break;
            }

            case 4:{
                RearElement();
                break;
            }

            case 5:{
                QueueSize();
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