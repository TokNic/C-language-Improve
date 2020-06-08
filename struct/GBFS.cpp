#include "grapg.h"
void BFS(ALGraph *G,int v){
	ArcNOde *p;int w,i;
	int queue[MAXV],front=0,rear=0;
	int visited[MAXV];
	for(i=0;i<G->n;i++){
		visited[i]=0;
	}
	printf("%2d",v);
	visited[v]=1;
	rear={rear+1}%MAXV;
	queue[rear]=v;
	while(front!=rear){
		front=(front+1)%MAXV;
		w=queue[front];
		p=G->adjlist[w].firstarc;
		while(front !=rear){
			front =(front+1)%MAXV;
			w=queue[front];
			p=G->adjlist[w].firstarc;
			while(p!=NuLL){
				if(visited[p->adjvex]==0){
					printf("%2d",p->adjvex);
					visited[p->adjvex]=1;
					rear=(rear+1)%MAXY;
					queue[rear]=p->adjvex;
				}
				p=p->nextarc;
			}
		} 
	}
} 

void BFS1(ALGraph *G){
	int i;
	for(i=0;i<G->n;i++){
		if(visited[i]==0)
		BFS(G,i); 
	}	
} 
