#include <stdio.h>
#include <stdlib.h>

#include "node.h"

struct Node {
    Key key;
    Value *value;
    Node *left, *right;  
};

Node *constructNode() {
    Node *node = NULL;

    node = (Node*)malloc(sizeof(Node));

    if (node == NULL) {
        printf("Error! Allocation of node fail.\n");
        exit(1);
    }

    node->key = NULL;
    node->value = NULL;
    node->left = NULL;
    node->right = NULL;

    return NULL;
}

/**
 * @brief Free (dynamically memory) of a node;
 * 
 * @param node Pointer to Abstract Data Type to represents a structure that contains all informations (update) about the Node;
 */
void freeNode(Node *node) {
    if (node != NULL) {
        if (node->value != NULL) {
            free(node->value);
            node->value = NULL;
        }
        free(node);
        node = NULL;
    }
}