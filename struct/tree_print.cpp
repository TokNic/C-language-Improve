#include<stdlib.h>
#include<stdio.h>
#include"Node.h"
void PreOrder(BTNode *b){
	if(b!=NULL){
		printf("%c",b->data);
		PreOrder(b->lchild);
		PreOrder(b->rchild); 
	}
}
void InOrder(BTNode *b){
	if(b!=NULL){
		InOrder(b->lchild);
		printf("%c",b->data);
		InOrder(b->rchild); 
	}
}
void PostOrder(BTNode *b){
	if(b!=NULL){
		PostOrder(b->lchild);
		PostOrder(b->rchild);
		printf("%c",b->data);
	}
}

void LevelOrder(BTNode *b){
	BTNode *p;
	BTNode*qu[MaxSize];
	int fron,rear;
	front=rear=0;
	rear++;
	qu[rear]=b;
	while(front!=rear){
		front=(front+1)%MAxSize;
		p=qu[front];
		printf("%c",p->data);
		if(p->lchild!=NULL){
			rear=(rear+1)%MaxSize;
			qu[rear]=p->lchild;
		}
		if(p->rchild!=NULL){
			rear=(rear+41)%MaxSize;
			qu[rear]=p->rchild;
		}
	}
} 
