#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_SIZE 10
typedef int SQDataType;


//��̬˳������⣺���������ƣ������˲����ã������ˣ�̫�˷�
//typedef struct SeqList
//{
//	SQDataType a[MAX_SIZE];
//	int size;
//}SL;

//��̬˳���
typedef struct SeqList
{
	SQDataType* a;
	int size;		//��Ч���ݵĸ���
	int capacity;	//����
}SL;



//��ɾ��ĵȽӿں���

//��һ����ʼ��
void SeqListInit(SL* ps);

//β��
void SeqListPushBack(SL* ps, SQDataType x);

//ͷ��
void SeqListPushFront(SL* ps, SQDataType x);

//βɾ
void SeqListPopBack(SL* ps);

//ͷɾ
void SeqListPopFront(SL* ps);

//�������
void SeqListInsert(SL* ps, int pos, SQDataType x);

//����ɾ��
void SeqListErase(SL* ps, int pos);

//��ӡ
void SeqListPrint(SL* ps);

//�������������
void SeqListCheckCapacity(SL* ps);

//���ٿռ�
void SeqListDestroy(SL* ps);

//����
int SeqListFind(SL* ps, SQDataType x);

//�޸�
void SeqListModify(SL* ps, int pos, SQDataType x);