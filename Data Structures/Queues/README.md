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

## Error:
- Underflow: An attempt was made to dequeue an empty queue.
- Overflow: An attempt was made to enqueue an item onto a full stack.

## Time Complexities:

For all the queue operations, the time complexity is ![formula](https://render.githubusercontent.com/render/math?math=O(1))

## Implementation:
- [Array](Queue_Array-Imp.cpp)
- [Linked List](Queue_LL-Imp.cpp)

## Applications:

- Operating systems often maintain a queue of processes that are ready to execute or that are waiting for a particular event to occur.  
- Computer systems must often provide a “holding area” for messages between two internal processes or programs, or between two systems over a network. This holding area is usually called a “buffer” and is often implemented as a queue, because we want the message time order to be retained.
