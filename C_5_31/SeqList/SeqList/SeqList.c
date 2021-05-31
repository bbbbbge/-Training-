#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//��ʼ��
void SeqListInit(SL* ps)
{
	//��̬
	/*memset(ps->a, 0, sizeof(SQDataType)*MAX_SIZE);
	ps->size = 0;*/

	//��̬
	/*ps->a=malloc*/
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//β��
void SeqListPushBack(SL* ps, SQDataType x)
{
	//��̬
	/*if (ps->size >= MAX_SIZE)
	{
		printf("SeqList is Full\n");
		return;
	}
	ps->a[ps->size] = x;
	ps->size++;*/

	//��̬
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

//ͷ��
void SeqListPushFront(SL* ps, SQDataType x)
{

	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}

//βɾ
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;
}

//ͷɾ
void SeqListPopFront(SL* ps)
{
	int start = 0;
	ps->size--;
	while (start < ps->size)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
}

//�������
void SeqListInsert(SL* ps, int pos, SQDataType x)//pos���±�ֵ
{
	assert(pos < ps->size);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

//����ɾ��
void SeqListErase(SL* ps, int pos)
{
	assert(pos < ps->size);
	int start = pos;
	ps->size--;
	while (start < ps->size)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
}

//��ӡ
void SeqListPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//�������������
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		//������
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}

//���ٿռ�
void SeqListDestroy(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

//����
int SeqListFind(SL* ps, SQDataType x)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}

//�޸�
void SeqListModify(SL* ps, int pos, SQDataType x)
{
	assert(pos < ps->size);
	ps->a[pos] = x;
}