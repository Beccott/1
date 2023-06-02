/*#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX 30
typedef int Element;
typedef struct ArrayGraph {
	int N;
	Element adjMatrix[MAX_VERTEX][MAX_VERTEX];
} Graph;
Graph* createGraph() {
	int i, j;
	Graph* G = (Graph*)malloc(sizeof(Graph));
	if (G == NULL) return NULL;
	G->N = 0;
	for (i = 0; i < MAX_VERTEX; i++)
		for (j = 0; j < MAX_VERTEX; j++)
			G->adjMatrix[i][j] = 0;
	return G;
}
void insertVertex(Graph* G, Element v) {
	if ((G->N + 1) > MAX_VERTEX) { return; }
	(G->N)++;
}
void insertEdge(Graph* G, Element u, Element v) {
	if (u >= G->N || v >= G->N) { return; }
	G->adjMatrix[u][v] = 1;
}
void printGraph(Graph* G) {
	int i, j;
	printf("Graph instance...");
	for (i = 0; i < G->N; i++) {
		printf("\n");
		for (j = 0; j < G->N; j++)
			printf("%d ", G->adjMatrix[i][j]);
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
}*/