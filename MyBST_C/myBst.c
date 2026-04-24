#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myBst.h"


TNODE* initialize(int data){
    TNODE *node = (TNODE *)malloc(sizeof(TNODE));
    node->data = data;
    node->left = NULL;
    node->right = NULL;     
    return node;
}



TNODE insert(TNODE **rootp, int data){
    if (*rootp == NULL){
        rootp == data;
    }

    TNODE curr = *rootp;

    if(curr->data > data){
        curr->left = insert(current.left, data);
    }
    if(curr->data < data){
        curr->right = insert(current.right, data);

    }

    return curr;
}

TNODE*  search(TNODE *root, int data){
    if (root == NULL){
        return 0;
    }

    if (root->data == data){
        return 1;
    }

    TNODE current = root;
    if(data < current->data){
        return search(current->left, data);

    } else {
        return search(current->right, data){
        }
    }

TNODE* remove(TNODE *root, int data){
    if(root == NULL) return root;

    if(root->data == data){
        free(root);
        return 1;
    }

    if (data < root->data){
        root->left = remove(root->left, data);
    } else if(data > root->data){
        root->right = remove(root->right, data);
    }
    else{
        if(root->left == NULL){
            TNODE *temp = root->right;
            free(root);
            return temp;
        } else if(root->right == NULL){
           TNODE *temp = root->left;
            free(root);
            return temp;
        }

        TNODE *temp = minvalue(root->right);
        root->data = temp->data;
        root->right = remove(root->right, temp->data);
    }

    return root;
}

TNODE* minvalue(TNODE *node){
    TNODE *curr = node;
    while (curr && curr->left != NULL){
        curr = curr->left;
    }
return curr;
}

void free_tree(TNODE *root) {
    if(root = NULL) return;

    free_tree(root->left);
    free_tree(root->right);

    free(root);
}
}

