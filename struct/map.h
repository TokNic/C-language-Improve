#include<stdio.h>
#include<stdlib.h>
#define MAXV 10

typedef  struct{
	int no;
	IntoType info;
}VertexType;

typedef struct{					//ͼ�Ķ��� 
	int edges[MAXV][MAXV];		//�ڽӾ��� 
	int n,e;					//���������ͱ��� 
	VertexType vexs[MAXV];		//��Ŷ�����Ϣ 
}MGraph;
