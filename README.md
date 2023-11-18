# Tree Exercices
Some exercices about create and traverse in trees
# Description about the program:
This C program allows users to input values to dynamically create a binary tree. 
The program then performs in-order, pre-order, and post-order traversals on the constructed tree.

# Files
## tree.h

### Description: 
Header file containing function prototypes and the definition of the TreeNode struct for binary tree nodes.
### Functions:
* createNode: Creates a new tree node.
* inorderTraversal: Performs in-order traversal.
* preorderTraversal: Performs pre-order traversal.
* postorderTraversal: Performs post-order traversal.
* insertNode: Inserts a key into the binary tree.
* getSize: Gets the size of the tree from user input.
* getValues: Gets values from the user and inserts them into the tree.
* printUsageTraversal: Prints the traversal corresponding to the user's option.

## tree.c
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

## Contributing
Contributions are welcome! Feel free to open issues or submit pull requests.

## License
This project is licensed under the MIT License - see the LICENSE file for details.
