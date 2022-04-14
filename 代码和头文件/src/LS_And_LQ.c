#include <stdio.h>
#include <stdlib.h>
#include "LS_And_LQ.h"
LinkStack *CreatStack(){
	LinkStackPtr temp;
	LinkStack *s;
	//头结点 
	temp = (LinkStackPtr)malloc(sizeof(struct StackNode));
	temp->data = NULL;
	temp->next = NULL;
	
	s = (LinkStack*)malloc(sizeof(struct LinkStack));
	s->top = temp;
	s->count = 0;
	return s;
}
int isEmptyLStack(LinkStack *s){
	if(s->count == 0) return 1;
	else return 0;
}
void Push(LinkStack *s,NodePtr data){
	StackNode* temp = (StackNode*)malloc(sizeof(struct StackNode));
	s->count++;
	temp->data = data;
	temp->next = NULL;
	if(isEmptyLStack(s)){
		s->top->next = temp;
	}
	else{
		temp->next = s->top->next;
		s->top->next = temp;
	}
}
NodePtr Pop(LinkStack *s){
	NodePtr data;
	StackNode* temp;
	s->count--;
	temp = s->top->next;
	data = temp->data;
	s->top->next = temp->next;
	free(temp);
	return data;
}

LQueue* CreatLQueue(){
	LQueue *Q = (LQueue*)malloc(sizeof(struct Lqueue));
	QNode *temp = (QNode*)malloc(sizeof(struct node));
	
	temp->data = NULL;
	temp->next = NULL;
	
	Q->front = Q->rear = temp;
	return Q;
}
int IsEmptyLQueue(const LQueue *Q){
	if(Q->rear - Q->front == 0) return 1;
	else return 0;
}
//入队在尾部  
void EnLQueue(LQueue *Q, NodePtr data)
{
	QNode *temp = (QNode*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	Q->rear->next = temp;
	Q->rear = temp;
}
//出队在头部
NodePtr DeLQueue(LQueue *Q){
	//头部空结点
	QNode *temp = Q->front->next;
	Q->front->next = temp->next;
	NodePtr data = temp->data;
	/*假设删除的是队里的最后一个结点*/
	if(Q->rear == temp){
		/*就要让尾结点指向空指针*/
		Q->rear = Q->front;
	}
	free(temp);
	return data;
}
