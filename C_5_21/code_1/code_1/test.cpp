#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//}

//char  *pc = NULL;	//NULL����ָ�룬���ʾ���0
//int   *pi = NULL;
//short *ps = NULL;
//long  *pl = NULL;
//float *pf = NULL;
//double *pd = NULL;

//����Ϊ32λ����
//int* pa;
//char* pc;
//double* pd;
//printf("%d\n", sizeof(pa));//	�����4
//printf("%d\n", sizeof(pc));//	�����4
//printf("%d\n", sizeof(pd));//	�����4

//int a = 0x11223344;// ͨ�����ԣ�a���� 44 33 22 11
//int* pa = &a;
//*pa = 0;//���Ե���һ����a��ֵ��Ϊ 00 00 00 00
//
////����int* pa=&a�ĳ�char* pc=&a;
//*pc = 0;//���Ե���һ����a��ֵ��Ϊ

//int arr[10] = { 0 };
//int* pi = arr;
//char* pc = arr;//��Ϊָ���Сһ�������������洢��ַ
//
//printf("%p\n", pi);//���Լ�����Ϊ��004FFC40
//printf("%p\n", pi + 1);//���Ϊ��004FFC44
//
//printf("%p\n", pc);//���Ϊ��004FFC40
//printf("%p\n", pc + 1);//���Ϊ��004FFC4100 33 22 11
//
//int main()
//{
//	//�����pΪҰָ��
//	int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	*p = 20;//�Ƿ������ڴ�
//
//	return 0;
//}
//
//int arr[10] = 0;
//int*p = arr;
//int i = 0;
//for (i = 0; i <= 10; i++)//��i=10ʱ��ָ���Ѿ�Խ���ˣ���ָ��ռ䲻������ģ���p����Ұָ��
//{
//	*p = i;
//	p++;
//}
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();//����tset������test�����д����˱���a�����ҽ�a�ĵ�ַ���س��������ǵ�return֮��a����������Ҳ�����ˣ�a���������١���Ȼָ��p���յ���һ����ַ������p�Ѿ�����ͨ����ַȥ���ʵ�a
//	*p = 20;
//	return 0;
//}
//
//float a[5];
//float* pa;
//for (pa = &a[0]; pa < &a[5])//pa<&a[5]��ָ��Ĺ�ϵ����
//{
//	*pa++ = 0;//++���ȼ�����*������ָ����++���ٽ����ã�ָ���������
//}
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//int* p = arr;
//int* pend = arr + 9;
//while (p <= pend)//��ָ��Ĺ�ϵ���㣩
//{
//	printf("%d\n", *p);
//	p++;//��ָ���������
//}
//
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//printf("%d\n", &arr[9] - &arr[0]);//���Ϊ9	��ָ��-ָ�룩
//
////ָ��-ָ��õ���������ָ��֮���Ԫ�ظ���
//
//int my_strlen(char* str)
//{
//	int cnt = 0;
//	while (*str != '\0')
//	{
//		cnt++;
//		str++;
//	}
//	return cnt;
//}
//int main()
//{
//	int len = my_strlen("abc");//����my_strlen�����е���ʵ���ַ�a�ĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	char* strat = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
