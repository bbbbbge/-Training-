#define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ
//�¶��ˣ���ϲ����Ϸ����
//�´��ˣ��������´��ˣ����ǲ�С�ˣ������£�ֱ����ȷ
//��Ϸ��һֱ���У������Զ�����

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("***** 1.play   0.exit ****\n");
//	printf("**************************\n");
//}
//void game()
//{
//	//rand��������һ��0-32767֮�������
//	//srand����һ����������
//	//timeʱ������������ʼʱ�䵽���ú���֮���
//	int ret = rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;//���ܷ���ѭ������
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 0:
//				printf("�˳���Ϸ��");
//				break;
//			case 1:
//				printf("��ʼ��������Ϸ��");
//				game();
//				break;
//			default:
//				printf("�������������ѡ��");
//				break;
//		}
//	} while (input);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int cout = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int num = i;
//		while (num)
//		{
//			if (num % 10 == 9)
//				cout++;
//			num /= 10;
//		}
//	}
//	printf("%d", cout);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	double a = 1.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += a * 1 / i;
//		a = -a;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int max = 0;
//	scanf("%d", &max);
//	for (i = 0; i < 9; i++)
//	{
//		int b = 0;
//		scanf("%d", &b);
//		if (b > max)
//		{
//			max = b;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, j*i);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int num = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�������±�Ϊ:%d", mid);
//			break;
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
flag:
	goto flag;
}











