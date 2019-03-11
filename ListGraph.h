#ifndef _ListGraph_H_
#define _ListGraph_H_
#define MAX_VERTEX_NUM 100
#define INFINITY_NUM 65535
typedef struct _gNode {
	int v;
	int weight;
	struct _gNode *next;
} GNode;
typedef struct {
	int v1, v2;
	int weight;
} ListEdge;
typedef struct {
	int vn;
	int en;
	GNode heads[MAX_VERTEX_NUM];
} ListGraph;
ListGraph* createGraph(int size);
void insertEdge(ListGraph* g, ListEdge* e);
ListGraph* buildGraph();
#endif
