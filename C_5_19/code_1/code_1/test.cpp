#define _CRT_SECURE_NO_WARNINGS 1

//�����µ���������������ֵ
//#include <stdio.h>
//int main()
//{
//	//1. �Ӽ���
//	//ȱ�㣺���ֹ�������
//	/*int a = 10, b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);*/
//
//	//2. ���
//	/*int a = 10, b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);*/
//	return 0;
//}

//��ĳ�����ж����Ƶ�1�ĸ���
//#include <stdio.h>
//int main()
//{
//	int n, cnt = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n & 1) cnt++; 
//		n = n >> 1;
//	}
//	printf("%d", cnt);
//	return 0;
//}

//sizeof��һ�������������Ǻ��������磨�����Բ��ã��������ݳ���ʱ

//int arr[10];------->int [10]���������ͣ�������sizeof(int [10])�������鳤��

//#include <stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int a = m ^ n, cnt = 0;
//	while (a)
//	{
//		if (a & 1) cnt++;
//		a = a >> 1;
//	}
//	printf("%d", cnt);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, cnt = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n & 1) cnt++;
//		n = n >> 1;
//	}
//	printf("%d", cnt);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	//�Ӽ���
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d %d", a, b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num, odnum, evnum, cnt = 0;
//	scanf("%d", &num);
//	odnum = num;
//	evnum = num;
//	while (cnt <= 32)
//	{
//		if (cnt % 2 == 0)
//		{
//			evnum = evnum & (~(1 << cnt));
//		}
//		else
//		{
//			odnum = odnum & (~(1 << cnt));
//		}
//		cnt++;
//	}
//	printf("%d %d", evnum, odnum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 0xb6;
//	printf("%d", a);
//	return 0;
//}

