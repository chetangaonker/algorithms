#include <stdio.h>

typedef struct node {
        int data;
        struct node* left;
        struct node* right;
} node_t*;

void bst_create(int i);
node_t* bst_insert( struct node_t* node);
node_t* bst_search( int key);
node_t* isBST( node_t* node);

        
