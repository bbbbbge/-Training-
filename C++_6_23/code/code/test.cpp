#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
//�������������
typedef struct BSTNode
{
	int key;
	struct BSTNode *lchild, *rchild;
}BSTNode, *BSTree;

//�ڶ�������������ֵΪkey�Ľ�㣨�ǵݹ飩
BSTNode* BST_Search(BSTree T, int key)
{
	while (T != NULL && key != T->key)
	{
		if (key < T->key) T = T->lchild;
		else T = T->rchild;
	}
	return T;
}

//�ڶ�������������ֵΪkey�Ľ�㣨�ݹ飩
BSTNode* BST_Search(BSTree T, int key)
{
	if (T == NULL) return NULL;
	if (key == T->key) return T;
	else if (key < T->key)
		return BST_Search(T->lchild, key);
	else
		return BST_Search(T->rchild, key);
}

//�ڶ�������������ؼ���Ϊk���½ڵ㣨�ݹ�ʵ�֣�
int BST_Insert(BSTree &T, int k)
{
	if (T == NULL)
	{
		T = (BSTree)malloc(sizeof(BSTNode));
		T->key = k;
		T->lchild = T->rchild = NULL;
		return 1;
	}
	else if (k == T->key) return 0;
	else if (k < T->key)
		return BST_Insert(T->lchild, k);
	else
		return BST_Insert(T->rchild, k);

}

//�ڶ�������������ؼ���Ϊk���½ڵ㣨�ǵݹ�ʵ�֣�
int BST_Insert(BSTree &T, int k)
{
	while (T != NULL)
	{
		if (k == T->key) return 0;
		else if (k < T->key) T = T->lchild;
		else T = T->rchild;
	}
	T->key = k;
	T->lchild = T->rchild = NULL;
	return 1;
}

//����str[]�еĹؼ������н�������������
void Create_BST(BSTree &T, int str[], int n)
{
	T = NULL;
	int i = 0;
	while (i < n)
	{
		BST_Insert(T, str[i]);
		i++;
	}
}

//ƽ�������
int main()
{
	int str[] = { 50,66,60,26,21,30,70,68 };
	

	return 0;
}