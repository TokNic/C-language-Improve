 #include<stdio.h>
 #include<stdlib.h>
 #define MAXV 20;
typedef int InfoType;
 typedef struct{
 	int no;
 	InfoType info;
 }VertecType;
 
typedef struct{
	int edges[MAXV][MAXV];
	int n,e;
	VertexType vexs[MAXV];
}MGraph;

typedef struct ANode{
	int adjvex;
	struct ANode *nextrac;
	InfoType info;
}ArcNode;
typedef struct Vnode{
	Vertex data;
	ArcNode *firstarc;
}VNode;
typedef struct{
	VNode adjlist[MAXV];
	int n,e;
}ALGraph;
