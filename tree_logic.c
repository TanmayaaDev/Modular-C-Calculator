#include "tree_lib.h"

BTreeNode* createNode(int data) {
    BTreeNode* newNode = (BTreeNode*)malloc(sizeof(BTreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BTreeNode* buildTree() {
    char val;
    if (scanf(" %c", &val) != 1) return NULL;
    BTreeNode* newNode = createNode(val);
    if (val == '+' || val == '-' || val == '*' || val == '/') {
        newNode->left = buildTree();
        newNode->right = buildTree();
    }
    return newNode;
}

void display(BTreeNode* root) {
    if (root == NULL) return;
    if (!isdigit(root->data)) printf("(");
    display(root->left);
    if (isdigit(root->data)) printf("%c", root->data);
    else printf(" %c ", root->data);
    display(root->right);
    if (!isdigit(root->data)) printf(")");
}

int evaluate(BTreeNode* root) {
    if (root == NULL) return 0;
    if (isdigit(root->data)) return root->data - '0';
    int a = evaluate(root->left);
    int b = evaluate(root->right);
    switch (root->data) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : 0;
    }
    return 0;
}

void deleteTree(BTreeNode* root) {
    if (root == NULL) return;
    deleteTree(root->left);
    deleteTree(root->right);
    free(root);
}