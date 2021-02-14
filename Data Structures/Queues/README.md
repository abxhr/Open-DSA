# Queues

First-In-First-Out

## Operations:

- Enqueue(Q, x):
```
Q[Q.rear] = x
if Q.rear == Q.length
  Q.rear = 1
else Q.rear = Q.rear + 1
```

- Dequeue(Q):
```
x = Q[Q.front]
if Q.front == Q.length
  Q.front = 1
else Q.front = Q.front + 1
return x
```

- IsEmpty(Q):
```
if Q.rear == Q.length
  return True
else
  return False
```

- Front(Q):
```
if IsEmpty(Q)
  error "Queue Underflow!"
else
  return Q[Q.front]
```

- Rear(Q):
```
if IsEmpty(Q)
  error "Queue Underflow!"
else
  return Q[Q.rear]
```

- QueueSize(Q):
```
return Q.rear - Q.front
```

## Time Complexities:

For all the queue operations, the time complexity is ![formula](https://render.githubusercontent.com/render/math?math=O(1))
