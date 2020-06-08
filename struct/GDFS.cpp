#include "graph.h"
void DFS(ALGraph *G,int v){
	arcNOde *p£»int w;
	visited[v]=1;
	printf("%d",v);
	p=G->adjlist[V].firstarc;
	while(p!=NULL){
		w=p->adjvex;
		if(visited[w]==0){
			DFS(G,w);
			p=p->nextarc; 
		}
	}
}

void DFS1(ALGraph *G){
	int i;
	for (i=0;i<G->n;i++)
	if(visited[i]==0)
	DFS(G,i); 
}
