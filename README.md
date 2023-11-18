# Tree Exercices
Some exercices about create and traverse in trees

# Description about the program:
This C program allows users to input values to dynamically create a binary tree. 
The program then performs in-order, pre-order, and post-order traversals on the constructed tree.

# Files :
## tree.h file :
### Description: 
Header file containing function prototypes and the definition of the TreeNode struct for binary tree nodes.
### Functions:

### 1. `createNode`:
#### Description: 
Creates a new tree node with the provided key as data.
#### Parameters:
* key: A number to add as data in the tree node.
* Return: A pointer to the created TreeNode.

### 2. `inorderTraversal`:

#### Description:
Prints data using in-order traversal (Left-Root-Right).
#### Parameters:
* root: Pointer to the root of the tree.
* Return: void.

### 3. `preorderTraversal`:

Description: Prints data using pre-order traversal (Root-Left-Right).
Parameters:
root: Pointer to the root of the tree.
Return: void.
### 4. `postorderTraversal`:

#### Description:
Prints data using post-order traversal (Left-Right-Root).
#### Parameters:
* root: Pointer to the root of the tree.
* Return: void.
### 5. `insertNode`:

#### Description:
Inserts a key into the binary tree.
#### Parameters:
* root: Pointer to the root of the tree.
* data: The value to insert into the tree.
* Return: A pointer to the modified tree.
  
### 5. `getSize`:

#### Description:
Gets the size of the tree from user input.
#### Parameters:
* msg: A message to be printed for user input.
* Return: The size of the tree.

### 6. `getValues`:

#### Description:
Gets values from the user and inserts them into the tree.
#### Parameters:
* root: Pointer to the root of the tree.
* size: The size of the tree.


### 7. `printUsageTraversal`:
#### Description:
Prints the usage traversal corresponding to the user's option.
#### Parameters:
* root: Pointer to the root of the tree.
* option: The option of the user.
* Return: void.


### 7. `searchNode`:

Description: Searches for a key in the binary tree and returns true if the key is found, and false otherwise.
Parameters:
root: Pointer to the root of the tree.
key: The value to search for in the tree.
Return: true if the key is found, false otherwise.
minNode:

Description: Finds the minimum value in the binary tree.
Parameters:
root: Pointer to the root of the tree.
Return: The minimum value found in the tree.
maxNode:

Description: Finds the maximum value in the binary tree.
Parameters:
root: Pointer to the root of the tree.
Return: The maximum value found in the tree.
nbrNode:

Description: Counts the number of nodes in the binary tree.
Parameters:
root: Pointer to the root of the tree.
Return: The total number of nodes in the tree.

## tree.c file:
## Description: 
Source file containing the main function to run the program.

## Functions: 
Refer to tree.h for function descriptions.


## Usage:
* Gets the number of nodes from the user.
* Gets values from the user and inserts them into the tree.
* Prompts the user to choose a traversal option (in-order, pre-order, or post-order).
* Prints the corresponding traversal.


## Compile the Program:
```
gcc -o tree *.c
```

## Run the Program:
```
./tree
```

## Contributing:
Contributions are welcome! Feel free to open issues or submit pull requests.

## License:
This project is licensed under the MIT License - see the LICENSE file for details.
