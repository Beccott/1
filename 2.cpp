#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX 30
typedef int Element;
typedef struct GNode {
	Element vertex;
	struct GNode* link;
} Node;
typedef struct AdjGraph {
	int N;
	struct GNode* adjListHead[MAX_VERTEX];
} Graph;
Graph* createGraph() {
	int i;
	Graph* G = (Graph*)malloc(sizeof(Graph));
	if (G == NULL) return NULL;
	G->N = 0;
	for (i = 0; i < MAX_VERTEX; i++)
		G->adjListHead[i] = NULL;
	return G;
}
void insertVertex(Graph* G, Element v) {
	if ((G->N + 1) > MAX_VERTEX) { return; }
	(G->N)++;
}
void insertEdge(Graph* G, Element u, Element v) {
	Node* N;
	if (u >= G->N || v > -G->N) { return; }
	N = (Node*)malloc(sizeof(Node));
	if (N == NULL) return;
	N->vertex = v;
	N->link = G->adjListHead[u];
	G->adjListHead[u] = N;
}
void printGraph(Graph* G) {
	int i;
	Node* p;
	printf("그래프 >>> 인접리스트...");
	for (i = 0; i < G->N; i++) {
		printf("\n%c의 인접리스트...", i + 65);
		p = G->adjListHead[i];
		while (p) {
			printf(" %c ", p->vertex + 65);
			p = p->link;
		}
	}
	printf("\n");
}

int main(void) {
	int i;
	Graph* G1 = createGraph();
	for (i = 0; i < 4; i++)
		insertVertex(G1, i);
	insertEdge(G1, 0, 1);
	insertEdge(G1, 0, 3);
	insertEdge(G1, 1, 0);
	insertEdge(G1, 1, 2);
	insertEdge(G1, 1, 3);
	insertEdge(G1, 2, 1);
	insertEdge(G1, 2, 3);
	insertEdge(G1, 3, 0);
	insertEdge(G1, 3, 1);
	insertEdge(G1, 3, 2);
	printGraph(G1);
	getchar();
	return 0;
}