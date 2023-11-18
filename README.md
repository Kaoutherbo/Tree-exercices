# Tree Exercices
Some exercices about create and traverse in trees


Certainly! Here's a README.md template describing the purpose and usage of the provided files:

Binary Tree Traversal in C
This C program allows users to input values to dynamically create a binary tree. The program then performs in-order, pre-order, and post-order traversals on the constructed tree.

Files
tree.h

Description: Header file containing function prototypes and the definition of the TreeNode struct for binary tree nodes.
Functions:
createNode: Creates a new tree node.
inorderTraversal: Performs in-order traversal.
preorderTraversal: Performs pre-order traversal.
postorderTraversal: Performs post-order traversal.
insertNode: Inserts a key into the binary tree.
getSize: Gets the size of the tree from user input.
getValues: Gets values from the user and inserts them into the tree.
printUsageTraversal: Prints the traversal corresponding to the user's option.
tree.c

Description: Source file containing the implementations of the functions declared in tree.h.
Functions: Refer to tree.h for function descriptions.
main.c

Description: Source file containing the main function to run the program.
Usage:
Gets the number of nodes from the user.
Gets values from the user and inserts them into the tree.
Prompts the user to choose a traversal option (in-order, pre-order, or post-order).
Prints the corresponding traversal.
Makefile

Description: Makefile to simplify the compilation process.
Usage:
Run make to compile the program.
Run ./binary_tree_traversal to execute the compiled program.
Run make clean to remove compiled files.
How to Run
Compile the Program:


make
Run the Program:

bash
Copy code
./binary_tree_traversal
Follow on-screen instructions to input values and observe tree traversals.

Contributing
Contributions are welcome! Feel free to open issues or submit pull requests.

# License
This project is licensed under the MIT License - see the LICENSE file for details.
