#include <iostream>
using namespace std;
template<typename T> //template
class StackUsingArray{
    T *data;
    int nextIndex;
    int capacity;
    
public:
    StackUsingArray(){
    data= new T[4];
    nextIndex=0;
    capacity=4;
    }
    
    int size(){
        return nextIndex;
    }
    
    bool checkEmpty(){
        return nextIndex==0;        
    }
    
    void push(T element){
        if(nextIndex==capacity){
        T *newdata=new T[capacity*2];   //dynamic_stack
        for(int i=0;i<capacity;i++){
            newdata[i]=data[i];
        }
        capacity*=2;
        delete []data;
        data=newdata;
        
            
        }
        
       data[nextIndex]=element;
       nextIndex++;
 
    }
    
    int pop(){
        if(checkEmpty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        nextIndex--;
    return data[nextIndex];
    }
    
    int top(){
        return data[nextIndex-1];
    }
    
    void display(){
        for(int i=0;i<nextIndex;i++){
            cout<<data[i]<<endl;
        }
    }
};

int main(){
    StackUsingArray<int> s;       
    int ch;
    
     while(ch!=7)
    {
        cout<<"\n1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. top\n";
        cout<<"4. size\n";
        cout<<"5. check\n";
        cout<<"6. display\n";
        cout<<"\nEnter your Choice :: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
            int x;
            cout<<"enter the element"<<endl;
            cin>>x;
                s.push(x);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                cout<<s.top()<<endl;
                break;

            case 4:
                
                s.size();
               
                break;
                
                case 5:
                s.checkEmpty();
                break;
                
                case 6:
                s.display();
                break;
                
                case 7:
                ch=7;
                cout<<"\nPress any key .. ";
                break;

            default:
                cout<<"\nWrong Choice!! \n";
                break;
        }
    }

    
    return 0;
}
