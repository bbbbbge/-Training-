#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return  x - y;
//}
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add, Sub };//pfArr��һ������ָ������
//
//	return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return  x - y;
//}
//int Mul(int x, int y)
//{
//	return  x * y;
//}
//int Div(int x, int y)
//{
//	return  x / y;
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1.Add      2.Sub ******\n");
//	printf("****** 3.Mul      4.Div ******\n");
//	printf("*********** 0.Exit ***********\n");
//	printf("******************************\n");
//}
//int main()
//{
//	//�����������������͵ļӡ������ˡ���
//	int input = 0;
//	do
//	{
//		menu();
//		int x, y;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			break;
//		case 0:
//			printf("�Ѿ��˳�����\n");
//			break;
//		default:
//			printf("ѡ������������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//
//	return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return  x - y;
//}
//int Mul(int x, int y)
//{
//	return  x * y;
//}
//int Div(int x, int y)
//{
//	return  x / y;
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1.Add      2.Sub ******\n");
//	printf("****** 3.Mul      4.Div ******\n");
//	printf("*********** 0.Exit ***********\n");
//	printf("******************************\n");
//}
//int main()
//{
//	//�����������������͵ļӡ������ˡ���
//	int input = 0;
//	do
//	{
//		menu();
//		int(*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//		int x, y;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//			printf("ѡ�����,����ѡ��\n");
//	} while (input);
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int(*p1)(int, int);//����ָ��
//	int(*p2[4])(int, int);//����ָ������
//	int(*(*p3)[4])(int, int) = &p2;//p3����һ��ָ����ָ�������ָ��
//	return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return  x - y;
//}
//int Mul(int x, int y)
//{
//	return  x * y;
//}
//int Div(int x, int y)
//{
//	return  x / y;
//}
//int Calc(int(*p)(int, int))
//{
//	int x, y;
//	printf("������������:>");
//	scanf("%d%d", &x, &y);
//	return p(x, y);
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1.Add      2.Sub ******\n");
//	printf("****** 3.Mul      4.Div ******\n");
//	printf("*********** 0.Exit ***********\n");
//	printf("******************************\n");
//}
//int main()
//{
//	//�����������������͵ļӡ������ˡ���
//	int input = 0;
//	do
//	{
//		menu();
//		int x, y;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			break;
//		case 0:
//			printf("�Ѿ��˳�����\n");
//			break;
//		default:
//			printf("ѡ������������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//
//
//	return 0;
//}

//void qsort(void* base, size_t num, size_t size, int(*compar)(const void*, const void*))
//{
//
//}
//void* ���Դ���������� 
//base �д�ŵ��Ǵ����������е�һ������ĵ�ַ
//num ��������Ԫ�صĸ���
//size ����������ÿ��Ԫ�صĴ�С���ֽڣ�
//Ϊָ��ȽϺ����ĺ���ָ�룬�����������˳��

//#include <stdio.h>
//#include <stdlib.h>
////qosrt������ʹ���ߵ�ʵ��һ���ȽϺ���
//int int_cmp(const void * p1, const void * p2)
//{
//	return (*(int *)p1 - *(int *)p2);
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int com_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//void test1()//��������������
//{
//	struct Stu s[] = { {"C",50},{"Java",25},{"Python",36} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), com_age);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", s[i].age);
//	}
//}
//int com_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//void test2()//��������������
//{
//	struct Stu s[] = { {"C",50},{"Java",25},{"Python",36} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), com_name);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//	}
//}
//int main()
//{
//	test1();//��������������
//	printf("\n");
//	test2();//��������������
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
void Swap(char* p1, char* p2, int width)//��ÿ��ֵ��ÿ���ֽڶ����н���
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}
void bubble_qsort(void* base, int sz, int width, int(*cmp)(const void *p1, const void *p2))
{
	int i = 0;
	for (int i = 0; i < sz - 1; i++)//����
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//ÿ������
		{
			//����Ԫ�رȽ�
			//��char��ԭ���ǲ�֪���������ͣ�������֪��ÿ���ֽڿ�ȣ�����char��ָ�뵥λ��Ϊ1�Ϳ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int cmp_int(const void * p1, const void * p2)
{
	return (*(int *)p1 - *(int *)p2);
}
void test()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(int), cmp_int);
	int i = 0;
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	test();
	return 0;
}