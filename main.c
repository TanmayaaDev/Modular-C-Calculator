#include "tree_lib.h"

int main() {
    printf("--- Modular Expression Engine ---\n");
    printf("Enter Prefix (e.g., + 5 8): ");
    
    // This calls the function inside tree_logic.c
    BTreeNode* root = buildTree();
    
    printf("\nExpression Traversal: ");
    display(root);
    
    printf("\nFinal Result: %d\n", evaluate(root));
    
    // Clean up memory
    deleteTree(root);
    
    return 0;
}