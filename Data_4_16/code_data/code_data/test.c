#define _CRT_SECURE_NO_WARNINGS 1

//�������״̬����
//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1			infeasible ����ʵ�ֵ�
//#define OVERFLOW -2				overflow ���
//
//Status �Ǻ��������ͣ���ֵ�Ǻ������״̬����
//typedef int Status;
//typedef char ElemType;


//exit:״ֵ̬ͨ������Ϊ0����ָʾ�����˳���������Ϊ����ֵ����ָʾ����



//���Ա�L�ĳ�ʼ�������������ã�
//Status InitList_Sq(SqList &L)			//����һ���յ�˳���L
//{
//	L.elem = (ElemType*)malloc(sizeof(ElemType)*MAXSIZE);		//Ϊ˳������ռ�
//	if (!L.elem) exit(OVERFLOW);		//�洢����ʧ��
//	L.length = 0;						//�ձ���Ϊ0
//	return OK;
//}

//�������Ա�L
//void DestroyList(SqList &L)
//{
//	if (L.elem) delete L.elem;			//�ͷ�Ѱ�洢�ռ�
//}

//������Ա�L
//void ClearList(SqList &L)
//{
//	L.length = 0;
//}

//�����Ա���
//int Getlength(SqList L)
//{
//	return (L.length);
//}

//�ж����Ա��Ƿ�Ϊ��
//int IsEmpty(SqList L)
//{
//	if (L.length == 0) return 1;
//	else return 0;
//}

//˳����ȡֵ������λ��i��ȡ���Ӧλ������Ԫ�ص����ݣ�
//int GetElem(SqList L, int i, ElemType &e)
//{
//	if (i<i || i>L.length) return ERROR;
	/*e = L.elem[i - 1];
	return OK;*/
//}

//˳���Ĳ���
//int LocateElem(SqList L, ElemType e)
//{
//	for (i = 0; i < L.length; i++)
//	{
//		if (L.elem[i] == e) return i + 1;
//	}
//	return 0;
//}





//#include <stdio.h>
//int get_max(int a, int b, int c)			//�����ߵ����ֵ��������Ŀ��������������ʽ
//{
//	return a > b ? (a > c ? a : c) : (b > c ? b : c);
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d", get_max(a, b, c));
//	return 0;
//}

//#include <stdio.h>
//int is_leap_year1(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int is_leap_year2(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int is_leap_year(int y)
//{
//	return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
//}
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	if (is_leap_year(y))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//void Swap(int* x, int* y)
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//#include <stdio.h>
//void print(int n)
//{
//	int col = n;
//	int row = n;
//	int i = 0;
//	for (i = 1; i <= col; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, j*i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}