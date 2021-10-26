# AVL Tree

AVL tree is a self-balancing Binary Search Tree where the difference between heights of left and right subtrees cannot be more than one for all nodes.

Tree rotation is an operation that changes the structure without interfering with the order of the elements on an AVL tree. It moves one node up in the tree and one node down. It is used to change the shape of the tree, and to decrease its height by moving smaller subtrees down and larger subtrees up, resulting in improved performance of many tree operations. The direction of a rotation depends on the side which the tree nodes are shifted upon whilst others say that it depends on which child takes the root’s place. This is a C++ Program to Implement AVL Tree.


### Function Descriptions:

`height(avl *)` : It calculate the height of the given AVL tree.

`difference(avl *)`: It calculate the difference between height of sub trees of given tree

`avl *rr_rotat(avl *)`: A right-right rotation is a combination of right rotation followed by right rotation.

`avl *ll_rotat(avl *)`: A left-left rotation is a combination of left rotation followed by left rotation.

`avl *lr_rotat(avl*)`: A left-right rotation is a combination of left rotation followed by right rotation.

`avl *rl_rotat(avl *)`: It is a combination of right rotation followed by left rotation.

`avl * balance(avl *)`: It perform balance operation to the tree by getting balance factor

`avl * insert(avl*, int)`: It perform insert operation. Insert values in the tree using this function. 

`show(avl*, int)`: It display the values of the tree. 

`inorder(avl *)`: Traverses a tree in an in-order manner. 

`preorder(avl *)`: Traverses a tree in a pre-order manner. 

`postorder(avl*)`: Traverses a tree in a post-order manner.

### Complexity:

The rotation operations (left and right rotate) take constant time as only a few pointers are being changed there. Updating the height and getting the balance factor also takes constant time. So the time complexity of AVL insert remains same as BST insert which is O(h) where h is the height of the tree. Since AVL tree is balanced, the height is O(Logn). So time complexity of AVL insert is O(Logn).

### Applications

AVL trees are mostly used for in-memory sorts of sets and dictionaries.<br>
AVL trees are also used extensively in database applications in which insertions and deletions are fewer but there are frequent lookups for data required.<br>
It is used in applications that require improved searching apart from the database applications.<br>
