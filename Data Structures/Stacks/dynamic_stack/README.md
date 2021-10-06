# Dynamic stack using array
The idea of a dynamic stack is to allocate additional memory so that the "stack full" scenario does not occur frequently.
By allocating new memory that is bigger than the existing stack memory and copying elements from the old stack to the new stack, a Growable array-based Stack may be created. 
## Templates
The basic concept is to give the data type as a parameter, eliminating the need to write the same code for multiple data types. A software firm, for example, may require sort() for several data type. We can build a single sort() function and give data type as a parameter instead of creating and maintaining several codes.
## Operations

- size():
  
  ```
    return nextIndex;
    ```
    
 - checkEmpty():
   ```
        return nextIndex==0;        
   ```
- push(x):
```
        if(nextIndex==capacity){
        T *newdata=new T[capacity*2];
        for(int i=0;i<capacity;i++){
            newdata[i]=data[i];
        }
        capacity*=2;
        delete []data;
        data=newdata;                   
        }        
       data[nextIndex]=element;
       nextIndex++;
 ```
 - pop():
 ```
        if(checkEmpty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        nextIndex--;
    return data[nextIndex];
    
 ```  
 - top():    
    ```
    return data[nextIndex-1];    
  
  
## Errors:

- Underflow: An attempt was made to pop an empty stack.

## Applications:

- expression evaluation.
- check parenthesis matching in an expression.
- Conversion from one form of expression to another.
- Memory Management.
- backtracking problems.
  
  
  
    
