#define _CRT_SECURE_NO_WARNINGS 1


//��һ����������1�ĸ���
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//�ж�һ�������ǲ���2�Ĵη�
//������ֻ��һ��1����2�Ĵη�
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if ((n&(n - 1)) == 0) printf("YES");
//	else printf("NO");
//	return 0;
//}

//��������������λ��ͬ�ĸ���
//#include <stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int a = n ^ m;
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//��ӡһ���������Ƶļ���λ��ż��λ
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		int a = (n >> i) & 1;
//		printf("%d ", a);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		int a = (n >> i) & 1;
//		printf("%d ", a);
//	}
//	return 0;
//}

//#include <stdio.h>
//int i = 0;
//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int main()
//{
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int b = -5;
//	return 0;
//}

//дһ�������жϵ�ǰ�������ֽ���
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a = n & 255;
//	int b = n >> 30;
//	if ((short)n == a)
//	{
//		printf("С���ֽ���\n");
//	}
//	else if ((short)n == b)
//	{
//		printf("����ֽ���\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//int  main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d", i + j);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	return 0;
}