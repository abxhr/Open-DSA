
# Singly Linked List
## Complexity
#### Time:
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


# Reverse a linked list


## Demo
Input: Head of following linked list 
1->2->3->4->NULL 
Output: Linked list should be changed to, 
4->3->2->1->NULL

Input: Head of following linked list 
1->2->3->4->5->NULL 
Output: Linked list should be changed to, 
5->4->3->2->1->NULL

## Algorithms
Initialize three pointers prev as NULL, curr as head and next as NULL.
Iterate through the linked list. In loop, do following. 
// Before changing next of current, 
// store next node 
next = curr->next
// Now change next of current 
// This is where actual reversing happens 
curr->next = prev 
// Move prev and curr one step forward 
prev = curr 
curr = next
