#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node *left; 
    struct node *right; 
}node;
node *create(node *tree,int data){
    node *n = (node*)malloc(sizeof(node));
    n->val = data;
    n->left = n->right = NULL;
    return n;
}
node *insert(node *tree,int value){
    node *ptr = tree;
    if (ptr == NULL){
        return create(tree,value);
    }
    if (ptr->val<value){
        ptr->right = insert(ptr->right,value);
    }
    else if (ptr->val>value){
        ptr->left = insert(ptr->left,value);
    }
    return ptr;
}
void inorderTraversal(node *tree){
    if (tree == NULL){
        return ; 
    }
    inorderTraversal(tree->left);
    printf("%d ->", tree->val);
    inorderTraversal(tree->right);
}
int main(void){
    node *root = NULL;
    insert(root,2);
    insert(root,1);
    insert(root,3);
    insert(root,6);
    inorderTraversal(root);
}