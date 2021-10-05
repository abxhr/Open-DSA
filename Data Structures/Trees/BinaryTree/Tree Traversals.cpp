#include <iostream>
using namespace std;
struct binary {
int data;
binary *left,*right;
};

binary* create(int data){
    binary *p;
    p=new binary;
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}

binary* insert(binary *node,int data){
    if(node==NULL){
        return create(data);
    }
    else if(data>node->data){
        node->right=insert(node->right,data);
    }else{
    node->left=insert(node->left,data);
    }
    return node;
}

void postorder(binary *node)
{
    if (node == NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}
void inorder(binary *node)
{
    if (node == NULL)
        return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}
void preorder(binary *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void graph_traversal(int arr[],int n){
        binary *root;
        root=create(arr[0]);
        for(int i=1;i<n;i++){
            insert(root,arr[i]);
        }
        int q=-1;
        do{
         if(q!=-1){
            cout<<"\n";
         }
        cout<<"1. Inorder Traversal\n";
        cout<<"2. Preorder Traversal\n";
        cout<<"3. Postorder Traversal\n";
        cout<<"4. Inorder, Preorder and Postorder\n";
        cout<<"5. Exit\n";
        cout<<" Pick from above List: ";
        scanf("%d",&q);
        switch(q){
            case 1:{
               cout<<"Inorder Traversal: ";
               inorder(root);
               cout<<"\n";
               break;
            }
            case 2:{
               cout<<"Preorder Traversal: ";
               preorder(root);
                cout<<"\n";
               break;
            }
            case 3:{
              cout<<"Postorder Traversal: ";
               postorder(root);
                cout<<"\n";
               break;
            }
            case 4:{
               cout<<"Inorder Traversal: ";
               inorder(root);
               cout<<"\nPreorder Traversal: ";
               preorder(root);
               cout<<"\nPostorder Traversal: ";
               postorder(root);
               cout<<"\n";
               break;
            }
            case 5:{
                exit(0);
                break;
            }
            default:{
                cout<<"Enter a valid operation!\n";
            }
        }
        }while(q!=5);
}

int main()
{
       int n;
       cout<<"Enter number of nodes in tree: ";
       cin>>n;
       int arr[n];
       printf("Enter the elements tree: ");
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
      graph_traversal(arr,n);

    return 0;
}
