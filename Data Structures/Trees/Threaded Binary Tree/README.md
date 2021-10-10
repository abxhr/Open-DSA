**Threaded Binary Tree:**

The idea of threaded binary trees is to make inorder traversal faster and do it without stack and without recursion. A binary tree is made threaded by making all right child pointers that would normally be NULL point to the inorder successor of the node (if it exists).

**There are two types of threaded binary trees:**

- Single Threaded: Where a NULL right pointers is made to point to the inorder successor (if successor exists)
- Double Threaded: Where both left and right NULL pointers are made to point to inorder predecessor and inorder successor respectively. The predecessor threads are useful for reverse inorder traversal and postorder traversal.

The threads are also useful for fast accessing ancestors of a node.

**Single Threaded Binary Tree:** Here only the right NULL pointer are made to point to inorder successor.

**Double Threaded Binary Tree:** Here both the right as well as the left NULL pointers are made to point inorder successor and inorder predecessor respectively. (here the left threads are helpful in reverse inorder traveral of the tree )

**Structure of node in threaded binary tree:**

A node in threaded binary tree has two additional attributes:

- rightThread
- leftThread

Both new attributes are of type bolean.

**Following is the node structure in a Single threaded binary tree and Double threaded binary tree:**

// **single** threaded<br>

struct Node{<br>
   Node *left ;<br>
   Node *right ;<br>
   bool rightThread ;<br>
}<br>

// **double** threaded<br>

struct Node{<br>
   int data ;<br>
   Node *left ;<br>
   Node *right ;<br>
   bool leftThread ;<br>
   bool rightThread ;<br>
}<br>

**Significance of bool variable (leftThread and rightThread) in structure:**

If we have some address stored in some node to diffrentiate whether that address is of parent node or of child node we use leftThread and rightThread bool variables.

LeftThread and rightThread bool variables stores whether left and right pointers point to child node or some ancestor node , if the bool variable is set to true that means pointer is pointing to child node and if it is set to 1 that means that pointer is pointing to parent node.

**For example:**

Let's us say for some node right pointer is pointing to some node and righThread is set to true, this means that it is pointing to it's children, but if in the same case if rightThread is set to false this means that it is pointing to it's parent node (and not child ).

**What happens with righmost and leftmost null nodes ?**

When we create a threaded binary tree the left most and rightmost pointers do not have inorder predecessor or inorder successor so they are made to point to a dummy node as you can see in the image and leftThread of leftmost node and rightThread of rightmost node is set to false.

**Operations in Threaded Binary Tree**

We can also perform various operations in a threaded binary tree like -

1.**Insert**<br>
2.**search**<br>
3.**Delete**<br>

After performing the following operations we need to make sure that our new binary tree still follows all the conditions of a threaded binary tree and also these operations should be performed with least amount of space and time complexity possible.

**Applications of Threaded Binary Tree:**

The idea of threaded binary trees is to make inorder traversal of the binary tree faster and do it without using any extra space, so sometimes in small systems where hardware is very limited we use threaded binary tree for better efficiency of the software in a limited hardware space.

**Time and space complexity for operations**

Time complexity for:

- For insertion : log(n)<br>
- For deletion : log(n)<br>
- For seaching : log(n)<br>

**Space complexity** for insertion is O(1) , for deletion and searching we donot require any extra space.

The time required for finding inorder predecessor or successor for a given node is O(1) provided we are on that node.

**The Code for Threaded Binary Tree and all other Operations are given in Threaded_Binary_Tree_all.cpp**
