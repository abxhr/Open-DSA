# Stacks

## Implementation:

- [Array](Stacks_ArrayImplementation.cpp)
- [Linked List](Stacks_LLImplementation.cpp)

## Operations:

- Push(S, x):
```
S.top == S.top + 1
S[S.top] = x
```

- Pop(S):
```
if IsEmpty(S)
    error "underflow"
else S.top = S.top - 1
    return S[S.top + 1]
```

- IsEmpty(S): 
```
if S.top == 0
    return True
else return False
```

- StackTop(S):
```
if IsEmpty(S)
    error "underflow"
else return S[top]
```

- StackSize(S):
```
return top + 1
```

## Errors:

- Underflow: An attempt was made to pop an empty stack.
- Overflow: An attempt was made to push an item onto a full stack.

## Complexity:
- Time:
    - Access: 
        - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n))
        - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n))
    - Search:
        - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n))
        - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n))
    - Insertion:
        - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))
        - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))
    - Deletion:
        - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))
        - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=O(1))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n))

## Applications:

- Parantheses Matching 
- Infix to postfix expressions
- Infix expression computation
- Backtracking
- Activation records
