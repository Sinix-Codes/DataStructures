# Trees 🌳🌴🌲
---

## Introduction

A tree is a data structure that consists of nodes in a parent/child relationship. A tree can be empty with no nodes or a tree is made up of nodes where each node is a data structure consisting of a value, pointer to a parent node, and an array of children nodes. A tree data structure can represent information that naturally forms a hierarchy. For example, an organization chart is a tree structure.

## Terminology

-   **Root** - The top node in a tree.
-   **Child** - A node directly connected to another node when moving away from the Root.
-   **Parent** - The converse notion of a child.
-   **Siblings** - A group of nodes with the same parent.
-   **Leaf** - A node with no children.
-   **Edge** - The connection between one node and another.
-   **Path** - A sequence of nodes and edges connecting a node with a descendant.
-   **Level** - Level of node is the number of edges on the path from the root node to the node.
-   **Height** - Height of node is the number of edges on the longest path from the node to a leaf + 1.
-   **Depth** - Depth of node is the number of edges from the node to the tree's root node.

## Types of Trees

-  **General Tree** - A tree data structure in which no node has a degree greater than two.
-  **Binary Tree** - A tree data structure in which each node has a degree of zero,one or max two.
-  **Binary Search Tree** - A binary tree in which the value of each node is greater than or equal to any value stored in the left sub-tree, and less than or equal to any value stored in the right sub-tree.
-  **Extended Binary Tree** - A binary tree in which every node other than the leaves has two children.
-  **Complete Binary Tree** - A binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.

## Binary Tree

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

### Properties of Binary Tree

-  The maximum number of nodes at level ‘l’ of a binary tree is 2^l.
-  Maximum number of nodes in a binary tree of height ‘h’ is 2^(h) – 1.
-  In a Binary Tree with N nodes, minimum possible height or minimum number of levels is  Log2(N+1)
-  A Binary Tree with L leaves has at least  Log2L + 1  levels

## Binary Search Tree

A binary search tree is a binary tree in which the value of each node is greater than or equal to any value stored in the left sub-tree, and less than or equal to any value stored in the right sub-tree.

### Properties of Binary Search Tree

-  The left subtree of a node contains only nodes with keys less than the node’s key.
-  The right subtree of a node contains only nodes with keys greater than the node’s key.
-  The left and right subtree each must also be a binary search tree.
-  There must be no duplicate nodes.

## Complete Binary Tree

A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.

Complete Binary tree looks like :
       ![Complete Binary Tree](https://cdn-images-1.medium.com/max/1600/1*D7IQwA9GtQLI1qAmL-bZPw.gif)


## Extended Binary Tree

An extended binary tree is a binary tree in which every node other than the leaves has two children.

General tree can be converted to extended binary tree by adding dummy nodes.

Converting General tree to extended binary tree :
        ![Extended Binary Tree](https://www.careerride.com/images/DS5.png)

---
## Representation of Binary trees in memory
---
### 1.Link
### 2.Sequential
---
### Linked Representation
. 
        ![linked](https://i.ytimg.com/vi/NKvOc58_tPM/maxresdefault.jpg)       

### Chart form of above presentation


| Sr.No | left  | Info  |Right  |
|-------|-------|-------|-------|
|   1   |   -1  |   K   | -1    |
|   2   |   3   |   E   |  -1   |
|   3   |   -1  |   Y   |  4    |
|   4   |   -1  |   H   |  -1   |
|   5   |    1  |   T   |   6   |
|   6   |    8  |   S   |   -1  |
|   7   |    2  |   D   |   5   |
|   8   |   -1  |   J   |  -1   |       
---



### Sequential Representation
.
    ![Sepqential](https://qph.fs.quoracdn.net/main-qimg-8b624abadb47f61cee1cc99c6bdf3475)

#### Rules :

1. OneDirectional array called tree is used to store elements of tree.
2. The root of the tree will be at first index(instead of 0)
         i.e. tree[1] will store root node of tree

3. Children of node stored in location 2*k (left node) and
         2*k+1 (right node).........(k = parent node)

4. Maximum size of array "tree" is given as 2^h - 1

5.  An empty tree or subtree is specified by NULL
        i.e. tree[1]=NULL
---

## Expression Tree 🌲⁎⁕/–🌲

#### Used for representing an equation

eg. 3+(5+9)*2 

![Q1.](https://cdncontribute.geeksforgeeks.org/wp-content/uploads/expression-tree.png)

---
## Traversing Binary Tree 🫱🏻‍🫲🏻

### Preorder Traversal

1. Visit the root.
2. Traverse the left subtree, i.e., call Preorder(left-subtree)
3. Traverse the right subtree, i.e., call Preorder(right-subtree)

### Inorder Traversal

1. Traverse the left subtree, i.e., call Inorder(left-subtree)
2. Visit the root.
3. Traverse the right subtree, i.e., call Inorder(right-subtree)

### Postorder Traversal

1. Traverse the left subtree, i.e., call Postorder(left-subtree)
2. Traverse the right subtree, i.e., call Postorder(right-subtree)
3. Visit the root.

---