#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ģ��
//#define LIST_INIT_SIZE 100
//ElemType---�Զ�������
//1.ֱ�ӻ���Ҫ����
//2.typedef int ElemType
//3.�н϶�֮�����Զ���һ���ṹ������

//typedef struct
//{
//	ElemType elem[LIST_INIT_SIZE];
//	int length;//��Ϊ���鳤�Ȳ��ɱ䣬�ʶ���һ������
//}SqList;


//����ʽ
//#define MAXSIZE 1000
//typedef struct
//{
//	float p;		//ϵ��
//	int e;			//ָ��
//}Polynomial;		//����ʽ
//typedef struct
//{
//	Polynomial* elem;		//�洢�ռ�Ļ���ַ
//	int length;				//����ʽ�еĸ���
//}SqList;					//����ʽ��˳��洢�ṹ����ΪSqList


//ͼ���
//#define MAXSIZE 1000
//typedef struct
//{
//	char no[20];		//ͼ����
//	char name[50];		//ͼ������
//	float price;		//ͼ��۸�
//}Book;
//typedef struct
//{
//	Book* elem;			//�洢�ռ�Ļ���ַ
//	int length;			//ͼ����е�ǰͼ��ĸ���
//}SqList;				//ͼ����˳��洢�ṹ����ΪSqList


//typedef struct
//{
//	ElemType* data;
//	int length;
//}SqList;			//˳�������
//
//SqList L;
//L.data = (ElemType*)malloc(sizeof(ElemType)*MaxSize);		//��̬����
//
//malloc(m)����������m�ֽڳ��ȵĵ�ַ�ռ䣬��������οռ���׵�ַ
//
//free(p)�������ͷ�ָ��p���±����Ĵ洢�ռ�
//
//��Ҫ����ͷ�ļ���<stdlib.h>


