#ifndef LS_AND_LQ_H
#define LS_AND_LQ_H
#include "binary_sort_tree.h" 

typedef  struct StackNode
{
	NodePtr data;
	struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef  struct  LinkStack
{
	LinkStackPtr top;
	int	count;
}LinkStack;

LinkStack *CreatStack();
int isEmptyLStack(LinkStack *s);
void Push(LinkStack *s,NodePtr data);
NodePtr popLStack(LinkStack *s);

typedef struct node
{
    NodePtr data;                   
    struct node *next;            //ָ��ǰ������һ���
}QNode;

typedef struct Lqueue
{
    QNode *front;                   //��ͷ
    QNode *rear;                    //��β
} LQueue;

LQueue* CreatLQueue();
int IsEmptyLQueue(const LQueue *Q);
void EnLQueue(LQueue *Q, NodePtr data);
NodePtr DeLQueue(LQueue *Q);

#endif
