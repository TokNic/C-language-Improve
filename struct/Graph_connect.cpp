#include "graph.h"
int visited[MAXV];
bool Connect(ALGraph *G){
	int i;
	bool flag=true;
	for(i=0;i<G->n;i++){
		visited[i]=0;
	}
	DFS(G,0);
	for(i=0;i<G->n;i++){
		if(visited[i]==0){
			flag=false;
			break;
		}
	}
	return flag;
}
