#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "BinTree.h"
#define PRINTLN printf("\n");
int main() {
	BinTree tree = createTree(6);
	add(&tree, 8);
	add(&tree, 4);
	add(&tree, 5);
	printf("pre recursion:\t");
	preOrderRecursion(&tree);
	PRINTLN;
	printf("pre loop:\t");
	preOrderLoop(&tree);
	PRINTLN;
	printf("in recursion:\t");
	inOrderRecursion(&tree);
	PRINTLN;
	printf("in loop:\t");
	inOrderLoop(&tree);
	PRINTLN;
	printf("post recursion:\t");
	postOrderRecursion(&tree);
	PRINTLN;
	printf("post loop:\t");
	postOrderLoop(&tree);
	return 0;
}
BinTree createTree(int x) {
	BinTree *tree = (BinTree*)malloc(sizeof(BinTree));
	tree->data = x;
	tree->left = NULL;
	tree->right = NULL;
	return *tree;
}
void add(BinTree *tree, int x) {
	BinTree *cur;
	int direct; 
	while (tree) {
		cur = tree;
		if (x <= tree->data) {
			direct = 0;
			tree = tree->left;
		} else {
			direct = 1;
			tree = tree->right;
		}
	}
	BinTree *t = (BinTree*)malloc(sizeof(BinTree));
	t->data = x;
	t->left = NULL;
	t->right = NULL;
	switch(direct) {
		case 0:
			cur->left = t;
			break;
		case 1:
			cur->right = t;
			break;
	}
}
void preOrderRecursion(BinTree *tree) {
	if (tree) {
		printf("%d ", tree->data);
		preOrderRecursion(tree->left);
		preOrderRecursion(tree->right);
	}
}
void preOrderLoop(BinTree *tree) {
	Stack s = createStack();
	while (tree || !isEmpty(&s)) {
		while (tree) {
			printf("%d ", tree->data);
			push(&s, tree);
			tree = tree->left;
		}
		if (!isEmpty(&s)) {
			tree = pop(&s);
			tree = tree->right;
		}
	}
}
void inOrderRecursion(BinTree *tree) {
	if (tree) {
		inOrderRecursion(tree->left);
		printf("%d ", tree->data);
		inOrderRecursion(tree->right);
	}
}
void inOrderLoop(BinTree *tree) {
	Stack s = createStack();
	while (tree || !isEmpty(&s)) {
		while (tree) {
			push(&s, tree);
			tree = tree->left;
		}
		if (!isEmpty(&s)) {
			tree = pop(&s);
			printf("%d ", tree->data);
			tree = tree->right;
		}
	}
}
void postOrderRecursion(BinTree *tree) {
	if (tree) {
		postOrderRecursion(tree->left);
		postOrderRecursion(tree->right);
		printf("%d ", tree->data);
	}
}
void postOrderLoop(BinTree *tree) {
	Stack s1 = createStack();
	Stack s2 = createStack();
	while (tree || !isEmpty(&s1)) {
		while (tree) {
			push(&s1, tree);
			push(&s2, tree);
			tree = tree->right;
		}
		if (!isEmpty(&s1)) {
			tree = pop(&s1);
			tree = tree->left;
		}
	}
	while (!isEmpty(&s2)) {
		tree = pop(&s2);
		printf("%d ", tree->data);
	}
}
void levelOrder(BinTree *tree) {
	
}

Stack createStack() {
	Stack s;
	s.size = 0;
	s.cur = NULL;
	return s;
}
void push(Stack *s, BinTree *data) {
	Node *n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->next = NULL;
	s->size++;
	if (s->cur) {
		s->cur->next = n;
		n->prev= s->cur;
		s->cur = n;
	} else {
		s->cur = n;
		n->prev = NULL;
	}
}
BinTree* pop(Stack *s) {
	BinTree *tree = NULL;
	if (s->cur != NULL) {
		Node *p = s->cur;
		tree = p->data;
		s->cur = p->prev;
		free(p);
		s->size--;
	}
	return tree;
}
int isEmpty(Stack *s) {
	return s->size <= 0;
}




































































