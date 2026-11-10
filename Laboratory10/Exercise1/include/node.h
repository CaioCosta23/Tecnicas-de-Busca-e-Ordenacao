#ifndef _NODE_H_
#define _NODE_H_

typedef struct Node Node;

/**
 * @brief Construct (dynamic allocation of memory for) a Node;
 * 
 * @return Node* Pointer to Abstract Data Type to represents a structure that contains all informations (inicialized) about the Node;
 */
Node *nodeConstruct();

/**
 * @brief Free (dynamically memory) of a node;
 * 
 * @param node Pointer to Abstract Data Type to represents a structure that contains all informations (update) about the Node;
 */
void freeNode(Node *node);

#endif