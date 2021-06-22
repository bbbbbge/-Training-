#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
//������˳��洢�ṹ
#define MaxSize 100
struct TreeNode
{
	int val;
	bool isEmpty;
};

struct ElemType
{
	int val;
};
//��������ʽ�洢�ṹ
typedef struct BiTNode
{
	ElemType data;
	struct BiTNode *lchild, *rchild;	//���Һ���ָ��
	//�������������Ӹ����
	struct BiNode *parent;				//�����ָ��
}BiTNode,*BiTree;

//�������
void PreOrder(BiTree T)
{
	if (T != NULL)
	{
		visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}

//�������������������
//�����н��
typedef struct LinkNode
{
	BiTNode *data;
	struct LinkNode *next;
}LinkNode;

typedef struct
{
	LinkNode *front, *rear;
}LinkQueue;
//�������
void LevelOrder(BiTree T)
{
	LinkQueue q;
	InitQueue(q);
	BiTree p;
	EnQueue(q, T);
	while (!IsEmpty(q))
	{
		Dequeue(q, p);
		visit(p);
		if (p->lchild != NULL)
			EnQueue(q, p->lchild);
		if (p->rchild != NULL)
			EnQueue(q, p->rchild);
	}
}

//�������������
typedef struct ThreadNode
{
	int data;
	struct ThreadNode *lchild, *rchild;
	int ltag, rtag;//����������־
}ThreadNode, *ThreadTree;

//���������������һ�߱���һ��������
void InThread(ThreadTree T)
{
	if (T != NULL)
	{
		InThread(T ->lchild);
		visit(T);
		InThread(T ->rchild);
	}
}
//ȫ�ֱ���preָ��ǰ���ʽ���ǰ��
ThreadNode *pre = NULL;

void visit(ThreadNode *q)
{
	if (q->lchild == NULL)
	{
		q->lchild = pre;
		q->ltag = 1;
	}
	if (pre != NULL && pre->lchild == NULL)
	{
		pre->rchild = q;
		pre->rtag = 1;
	}
	pre = q;
}

//����������������T
void CreateInThread(ThreadTree T)
{
	pre = NULL;
	if (T != NULL)
	{
		InThread(T);
		if (pre->rchild == NULL)
			pre->rtag = 1;
	}
}
int main()
{
	//TreeNode t[MaxSize];
	//����һ������ΪMaxSize������t�����մ������£��������ҵ�˳�����δ洢��ȫ�������еĸ����ڵ�
	//����һ�ſ���
	BiTree root = NULL;

	//��������
	root = (BiTree)malloc(sizeof(BiTNode));
	root->data = { 1 };
	root->lchild = NULL;
	root->rchild = NULL;

	//�����½��
	BiTNode *p = (BiTNode*)malloc(sizeof(BiTNode));
	p->data = { 2 };
	p->lchild = NULL;
	p->rchild = NULL;
	root->lchild = p;

	return 0;
}