#ifndef TREE_LIB_H
#define TREE_LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct BTreeNode {
    int data;
    struct BTreeNode *left, *right;
} BTreeNode;

BTreeNode* createNode(int data);
BTreeNode* buildTree();
void display(BTreeNode* root);
int evaluate(BTreeNode* root);
void deleteTree(BTreeNode* root);

#endif