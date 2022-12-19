#include <stdio.h>
#define MAX_VERTEX 30


typedef struct GraphNode{ // 그래프노드 구조체 정의
    int vertex;
    struct GraphNode* link;
}GraphNode;

typedef struct GraphType{ // 그래프타입 구조체 정의
    int n;
    GraphNode* adjList[MAX_VERTEX];
    // GraphNode *p0, *p1, *p2, *p3...............;
}GraphType

void createGraph(GraphType* g)
{
	int v;
	p->n = 0; // 정점 개수 0
	for(v=0; v< MAX_VERTEX; v++) 
		g->adjList[v] = NULL; // 인접리스트 배열 주소값 초기화
}

void insertVertex(GraphType* g, int v) // u = 0, v = 1
{
	if(((g->n)+1)>MAX_VERTEX){
		printf("\n 그래프 정점의 개수를 초과하였습니다!");
		return;
	}
	g->n++; // 정점 개수 1증가
}

void insertEdge(GraphType* g, int u, int v) // insertFirst
{
	graphNode* node;
	if(u > g->n || v > g->n/*정점 범위를 초과하면*/) {
		printf("\n 그래프에 없는 정점입니다!");
		return;
	}
	node = (GraphNode*)(sizeof(GraphNode)); // 노드타입 동적 할당 60
	node->vertex = v; // 정점 저장 v = 1
    if (g->adjList[u]==NULL) {
        g->adjList[n] = node; // 60 1값 노드
    }
    else {
        GraphNode* p = (GraphNode*)(sizeof(GraphNode));
        for(p = p->adjList[u]; p->)
    }
	node->link = NULL; // 배열에 저장된 정점 리스트의 처음 주소를 저장
	g->adjList[u] = node; // 현재 추가된 노드의 주소를 리스트의 주소값으로 저장;
}

void print_adjList(GraphType* g)
{
	int i;
	GraphNode* p;
	for(i=0; i<g->n; i++){
		printf("\n정점 %C의 인접리스트 ", i+65);
		p= g->adjList[i]; // i번째 정점의 시작주소 저장
		while(p!=NULL){
			printf(" -> %c", p->vertex + 'A'/*정점 출력*/);  // 정점 0~4를 A~D로 출력
			p = p->link; // 다음 링크로 이동	
		}
	}
}

int main()
{
	int i;
	GraphType *G;
	G = (GraphType *)malloc(sizeof(GraphType));

	createGraph(G); 
	for(i=0; i<4; i++)
		insertVertex(G, i);
	insertEdge(G, 0, 1);
	insertEdge(G, 1, 0);
	insertEdge(G, 1, 2);
	insertEdge(G, 1, 3);
	insertEdge(G, 2, 1);
	insertEdge(G, 2, 3);
	insertEdge(G, 3, 1);
	insertEdge(G, 3, 2);
	
	printf("<G의 인접 리스트>");
	print_adjList(G);
		
  return 0;
} 