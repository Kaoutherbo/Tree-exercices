# Tree Exercices
Some exercises about creating and traversing trees in C.

## Description about the program:
This C program allows users to input values to dynamically create a binary tree.
The program then performs in-order, pre-order, and post-order traversals on the constructed tree.

## Files:
### tree.h file:
#### Description:
Header file containing function prototypes and the definition of the TreeNode struct for binary tree nodes.

#### Functions:

1. **`createNode`:**
   - **Description:**
     Creates a new tree node with the provided key as data.
   - **Parameters:**
     * key: A number to add as data in the tree node.
     * Return: A pointer to the created TreeNode.

2. **`inorderTraversal`:**
   - **Description:**
     Prints data using in-order traversal (Left-Root-Right).
   - **Parameters:**
     * root: Pointer to the root of the tree.
     * Return: void.

3. **`preorderTraversal`:**
   - **Description:**
     Prints data using pre-order traversal (Root-Left-Right).
   - **Parameters:**
     * root: Pointer to the root of the tree.
     * Return: void.

4. **`postorderTraversal`:**
   - **Description:**
     Prints data using post-order traversal (Left-Right-Root).
   - **Parameters:**
     * root: Pointer to the root of the tree.
     * Return: void.

5. **`insertNode`:**
   - **Description:**
     Inserts a key into the binary tree.
   - **Parameters:**
     * root: Pointer to the root of the tree.
     * data: The value to insert into the tree.
     * Return: A pointer to the modified tree.

6. **`getSize`:**
   - **Description:**
     Gets the size of the tree from user input.
   - **Parameters:**
     * msg: A message to be printed for user input.
     * Return: The size of the tree.

7. **`getValues`:**
   - **Description:**
     Gets values from the user and inserts them into the tree.
   - **Parameters:**
     * root: Pointer to the root of the tree.
     * size: The size of the tree.

8. **`printUsageTraversal`:**
   - **Description:**
     Prints the usage traversal corresponding to the user's option.
   - **Parameters:**
     * root: Pointer to the root of the tree.
     * option: The option of the user.
     * Return: void.

9. **`searchNode`:**
   - **Description:**
     Searches for a key in the binary tree and returns true if the key is found, and false otherwise.
   - **Parameters:**
     * root: Pointer to the root of the tree.
     * key: The value to search for in the tree.
     * Return: true if the key is found, false otherwise.

10. **`minNode`:**
    - **Description:**
      Finds the minimum value in the binary tree.
    - **Parameters:**
      * root: Pointer to the root of the tree.
      * Return: The minimum value found in the tree.

11. **`maxNode`:**
    - **Description:**
      Finds the maximum value in the binary tree.
    - **Parameters:**
      * root: Pointer to the root of the tree.
      * Return: The maximum value found in the tree.

12. **`nbrNode`:**
    - **Description:**
      Counts the number of nodes in the binary tree.
    - **Parameters:**
      * root: Pointer to the root of the tree.
      * Return: The total number of nodes in the tree.

13. **`heightTree`:**
    - **Description:**
      Returns the height of the tree.
    - **Parameters:**
      * root: Pointer to the root of the tree.
      * Return: The height of the tree.

14. **`createNodeList`:**
    - **Description:**
      Creates a new node for a linked list with the provided value.
    - **Parameters:**
      * val: A value to add in the linked list node.
      * Return: A pointer to the created Node.

15. **`insertNodeList`:**
    - **Description:**
      Inserts a value into a linked list.
    - **Parameters:**
      * head: Pointer to the head of the linked list.
      * val: The value to insert into the linked list.
      * Return: A pointer to the modified linked list.

16. **`printList`:**
    - **Description:**
      Prints the elements of a linked list.
    - **Parameters:**
      * head: Pointer to the head of the linked list.
      * Return: void.

17. **`splitTreeToLists`:**
    - **Description:**
      Classifies elements of a binary tree into two linked lists based on a certain condition.
    - **Parameters:**
      * root: Pointer to the root of the tree.
      * list1: Pointer to the head of the first linked list.
      * list2: Pointer to the head of the second linked list.
      * val: The value used as a condition for classification.
      * Return: void.

## tree.c file:
### Description:
Source file containing the main function to run the program.

### Functions:
Refer to tree.h for function descriptions.

## Compile the Program:
```
gcc -o tree *.c
```

## Run the Program:

1. **Gets the number of nodes from the user:**
   - Run the program by executing the following commands in your terminal:
     ```bash
     ./tree
     ```
   - Enter the number of nodes when prompted and press `Enter`.

2. **Gets values from the user and inserts them into the tree:**
   - After entering the number of nodes, the program will prompt you to enter values for each node.
   - For each prompt, enter a numerical value and press `Enter`.

3. **Prompts the user to choose a traversal option:**
   - After entering the values, the program will prompt you with options for tree traversal:
     ```plaintext
     Press:
     1) for Inorder Traversal
     2) for Preorder Traversal
     3) for Postorder Traversal
     ```
   - Enter the corresponding number for the desired traversal option and press `Enter`.

4. **Prints the corresponding traversal:**
   - The program will then print the result of the selected traversal option based on the constructed binary tree.
   - The result will be displayed in the console.

5. **Additional Functions:**
   - The program also provides additional functions for further analysis of the binary tree:
     - **Search for a Node:**
       - To search for a specific value in the tree, you can use the `searchNode` function.
     

     - **Find Minimum Value:**
       - To find the minimum value in the tree, you can use the `minNode` function.
        
     - **Find Maximum Value:**
       - To find the maximum value in the tree, you can use the `maxNode` function.
         

     - **Count Number of Nodes:**
       - To count the number of nodes in the tree, you can use the `nbrNode` function.
        

     - **Calculate Height of the Tree:**
       - To calculate the height of the tree, you can use the `heightTree` function.
        

     - **Create a Linked List Node:**
       - To create a new node for a linked list, you can use the `createNodeList` function.
        

     - **Insert into a Linked List:**
       - To insert a value into a linked list, you can use the `insertNodeList` function.
       

     - **Print Elements of a Linked List:**
       - To print the elements of a linked list, you can use the `printList` function.
        
     - **Split Tree Elements into Linked Lists:**
       - To classify elements of a binary tree into two linked lists based on a certain condition, you can use the `splitTreeToLists` function.
        

## Contributing:
Contributions are welcome! Feel free to open issues or submit pull requests.

