#ifndef _BinTree_H_
#define _BinTree_H_
typedef struct _bin_tree {
	int data;
	struct _bin_tree *left;
	struct _bin_tree *right;
} BinTree;
typedef struct _node {
	struct _bin_tree *data;
	struct _node *prev;
	struct _node *next;
} Node;
typedef struct {
	int size;
	struct _node *cur;
} Stack;


BinTree createTree(int x);
void add(BinTree *tree, int x);
void preOrderRecursion(BinTree *tree);
void preOrderLoop(BinTree *tree);
void inOrderRecursion(BinTree *tree);
void inOrderLoop(BinTree *tree);
void postOrderRecursion(BinTree *tree);
void postOrderLoop(BinTree *tree);
void levelOrder(BinTree *tree);

Stack createStack();
void push(Stack *s, BinTree *data);
BinTree* pop(Stack *s);
int isEmpty(Stack *s);
#endif
