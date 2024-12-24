//Harshit Mishra 23BAI10473
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *left;
    struct node *right;
} node;

// Function to create a new node
node *create(node *tree, int data) {
    node *n = (node *)malloc(sizeof(node));
    n->val = data;
    n->left = n->right = NULL;
    return n;
}

// Function to insert a value into the BST
node *insert(node *tree, int value) {
    if (tree == NULL) {
        return create(tree, value);
    }
    if (value < tree->val) {
        tree->left = insert(tree->left, value);
    } else if (value > tree->val) {
        tree->right = insert(tree->right, value);
    }
    return tree;
}

// Function to find the minimum value in the tree
node *findMin(node *tree) {
    while (tree->left != NULL) {
        tree = tree->left;
    }
    return tree;
}

// Function to delete a node from the BST
node *delete(node *tree, int value) {
    if (tree == NULL) {
        return tree;
    }
    if (value < tree->val) {
        tree->left = delete(tree->left, value);
    } else if (value > tree->val) {
        tree->right = delete(tree->right, value);
    } else {
        // Node with only one child or no child
        if (tree->left == NULL) {
            node *temp = tree->right;
            free(tree);
            return temp;
        } else if (tree->right == NULL) {
            node *temp = tree->left;
            free(tree);
            return temp;
        }

        // Node with two children: Get the inorder successor
        node *temp = findMin(tree->right);
        tree->val = temp->val;
        tree->right = delete(tree->right, temp->val);
    }
    return tree;
}

// Inorder traversal
void inorderTraversal(node *tree) {
    if (tree == NULL) {
        return;
    }
    inorderTraversal(tree->left);
    printf("%d -> ", tree->val);
    inorderTraversal(tree->right);
}

// Preorder traversal
void preorderTraversal(node *tree) {
    if (tree == NULL) {
        return;
    }
    printf("%d -> ", tree->val);
    preorderTraversal(tree->left);
    preorderTraversal(tree->right);
}

// Postorder traversal
void postorderTraversal(node *tree) {
    if (tree == NULL) {
        return;
    }
    postorderTraversal(tree->left);
    postorderTraversal(tree->right);
    printf("%d -> ", tree->val);
}

// Menu-driven program
int main(void) {
    node *root = NULL;
    int choice, value;

    while (1) {
        printf("\n--- Binary Search Tree Menu ---\n");
        printf("1. Insert a node\n");
        printf("2. Delete a node\n");
        printf("3. Inorder Traversal\n");
        printf("4. Preorder Traversal\n");
        printf("5. Postorder Traversal\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            root = insert(root, value);
            break;
        case 2:
            printf("Enter value to delete: ");
            scanf("%d", &value);
            root = delete(root, value);
            break;
        case 3:
            printf("Inorder Traversal: ");
            inorderTraversal(root);
            printf("\n");
            break;
        case 4:
            printf("Preorder Traversal: ");
            preorderTraversal(root);
            printf("\n");
            break;
        case 5:
            printf("Postorder Traversal: ");
            postorderTraversal(root);
            printf("\n");
            break;
        case 6:
            printf("Exiting program. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
/*@Harshitmishra001 ➜ /workspaces/Programming_Practice (main) $ ./binarytree_basic

--- Binary Search Tree Menu ---
1. Insert a node
2. Delete a node
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice: 1
Enter value to insert: 21

--- Binary Search Tree Menu ---
1. Insert a node
2. Delete a node
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice: 1
Enter value to insert: 32

--- Binary Search Tree Menu ---
1. Insert a node
2. Delete a node
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice: 1
Enter value to insert: 45

--- Binary Search Tree Menu ---
1. Insert a node
2. Delete a node
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice: 3
Inorder Traversal: 21 -> 32 -> 45 -> */