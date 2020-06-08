#include<stdio.h>
#include<stdlib.h>
#define MAXV 10

typedef  struct{
	int no;
	IntoType info;
}VertexType;

typedef struct{					//图的定义 
	int edges[MAXV][MAXV];		//邻接矩阵 
	int n,e;					//顶点数，和边数 
	VertexType vexs[MAXV];		//存放顶点信息 
}MGraph;
