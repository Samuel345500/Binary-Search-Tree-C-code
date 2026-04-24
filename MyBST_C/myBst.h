#ifndef MYBST_H
#define MYBST_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

typedef struct tnode {
    int data;
    struct tnode *left = NULL; 
    struct tnode *right = NULL;
} TNODE;

TNODE *initialize(int data);
TNODE *insert(TNODE **rootp, int data);
TNODE *search(TNODE *root, int key);
TNODE *remove(TNODE **rootp, int key);

void free_tree(TNODE *root);
#endif