#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

int llsize = 0;
node* head = NULL;
node* last = NULL;

void insert(int val, int index = llsize){
    llsize++;
    if (head == NULL){
        head = new node();
        head->data = val;
        head->next = NULL;
        head->prev = NULL;
        last = head;
        cout << "Node inserted!" << endl;
        return;
    }    
    node* temp = new node();
    temp->data = val;
    if (index == 0){
        temp->next = head;
        temp->prev = NULL; 
        head = temp;
    }
    else if (index < llsize - 1){
        int i = 0;
        node* replace = head;
        node* previous_node = NULL;
        while(replace != NULL && i < index){
            previous_node = replace;
            replace = replace->next;
            i++;
        }
        previous_node->next = temp;
        temp->prev = previous_node;
        temp->next = replace;
        replace->prev = temp;
    }
    else{
        last->next = temp;
        temp->prev = last;
        temp->next = NULL;
        last = temp;
    }
    cout << "Node Inserted!" << endl;
}

void delete_node(int x){
    node* temp = head;
    node* previous_node = NULL;

    if(temp != NULL && temp->data == x){
        head = head->next;
        head->prev = NULL;
        delete temp;
        cout << "Deleted!" << endl;
        llsize--;
        return ;
    }
    else if(last->data == x){
        temp = last;
        (last->prev)->next = NULL;
        last = last->prev;
        delete temp;
        cout << "Deleted!" << endl;
        return ;
    }
    else{
        while(temp != NULL && temp->data != x){
            previous_node = temp;
            temp = temp->next;
        }
        if (temp == NULL){
            cout << "Can't find node!" << endl;
            return ;
        }
        previous_node->next = temp->next;
        if(previous_node->next == NULL){
            last = previous_node;
        }
        (previous_node->next)->prev = previous_node;
        delete temp;
        llsize--;
        cout << "Deleted!" << endl;
    }
}

void search(int x){
    node* temp = head;

    if(temp != NULL && temp->data == x){
        cout << "Element at node 0 (Head)" << endl;
        return ;
    }
    else{
        int i = 0;
        while(temp != NULL && temp->data != x){
            temp = temp->next;
            i++;
        }
        if(temp == NULL){
            cout << "Element not found!" << endl;
            return ;
        }
        cout << "Element at index " << i << endl;
    }
}

void display_one(int index){
    if (index<0 || index>=llsize){
        cout << "Out of Bounds!" << endl;
        return ;
    }
    else if(llsize == 0){
        cout << "NULL" << endl;
        return ;
    }
    int i = 0;
    node* temp = head;
    while(temp!=NULL && i<index){
        temp = temp->next;
        i++;
    }
    cout << "Element: " << temp->data << endl;
}

void display_ll(){
    node* temp = head;
    if (llsize == 0){
        cout << "Empty linked list!" << endl;
        return;
    }
    cout << "Linked list in forward traversal: " << endl;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout <<"Linked list in backward traversal: " << endl;
    temp = last;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}


int main(){
    int q = 1;
    do{
        cout << endl;
        cout << "1. Insert a node" << endl;
        cout << "2. Delete a node" << endl;
        cout << "3. Search element" << endl;
        cout << "4. Display one node" << endl;
        cout << "5. Display linked list" << endl;
        cout << "6. Exit" << endl;
        cout << endl;
        cout << "Enter query: ";
        cin >> q;
        switch(q){
            case 1:{
                int val;
                cout << "Enter the value to enter: ";
                cin >> val;
                char op;
                cout << "Add node to end of linked list? (Y/N): ";
                cin >> op;
                switch(op){
                    case 'Y':
                    case 'y':{
                        insert(val);
                        break;
                    }
                    case 'N':
                    case 'n':{
                        int i;
                        cout << "Enter the index to enter the node to: ";
                        cin >> i;
                        insert(val, i);
                        break;
                    }
                    default:{
                        cout << "Enter a valid input!" << endl;
                    }
                }
                break;
            }

            case 2:{
                int x;
                cout << "Enter element to delete: ";
                cin >> x;
                delete_node(x);
                break;
            }

            case 3:{
                int x;
                cout << "Enter value to search: ";
                cin >> x;
                search(x);
                break;
            }

            case 4:{
                int i;
                cout << "Enter index: ";
                cin >> i;
                display_one(i);
                break;
            }

            case 5:{
                display_ll();
                break;
            }

            case 6:{
                exit(1);
                break;
            }

            default:{
                cout << "Enter a valid query!" << endl;
            }
        }
    }while(q != 6);
    return 0;
}
