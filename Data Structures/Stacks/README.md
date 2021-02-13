# Stacks

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