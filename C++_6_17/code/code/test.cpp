#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <stdlib.h>
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//}LNode,*LinkList;
//
//bool InitList(LinkList &L)//����ͷ���
//{
//	L = NULL;//�ձ���ʱ��û���κν��
//	return true;
//}
//
//bool InitList(LinkList &L)//��ͷ���
//{
//	L = (LNode*)malloc(sizeof(LNode));
//	if (L == NULL)
//		return false;
//	L->next = NULL;
//	return true;
//}
//
//bool ListInsert(LinkList &L, int i, int e)//����ͷ�ڵ�
//{
//	if (i < 1) return false;
//	LNode* p;
//	int j = 0;
//	p = L;
//	while (p != NULL && j < i - 1)
//	{
//		p = p -> next;
//		j++;
//	}
//	if (p = NULL) return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
//
//bool ListInsert(LinkList &L, int i, int e)
//{
//	if (i < 1) return false;
//	if (i == 1)
//	{
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = e;
//		s->next = L;
//		L = s;
//		return true;
//	}
//	LNode* p;
//	int j = 1;
//	p = L;
//	while (p != NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL) return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//}
//
////��壬��p���֮�����Ԫ��e
//bool InsertNextNode(LNode* p, int e)
//{
//	if (p == NULL) return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL) return false;
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
//
////������iλ�ò���Ԫ��e���
//bool ListInsert(LinkList &L, int i, int e)
//{
//	if (i < 1) return false;
//	LNode* p;
//	int j = 0;
//	p = L;
//	while (p != NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	return InsertNextNode(p, e);
//}
//
////��p���ǰ������s
//bool InsertPriorNode(LNode* p, LNode* s)
//{
//	if (p == NULL || s == NULL) return false;
//	s->next = p->next;
//	p->next = s;
//	int tmp = p->data;
//	p->data = s->data;
//	s->data = tmp;
//	return true;
//}
//
////ɾ��λ��Ϊi�Ľ��
//bool ListDelet(LinkList &L, int i, int &e)
//{
//	if (i < 1) return false;
//	LNode* p;
//	int j = 0;
//	p = L;
//	while (p != NULL && j < i - 1)
//	{
//		p->next;
//		j++;
//	}
//	if (p == NULL) return false;
//	if (p->next = NULL) return false;
//	LNode* s=p->next;
//	e = s->data;
//	p->next = s->next;
//	free(s);
//	return true;
//}
//
////ɾ��ָ�����p
//bool DeletNode(LNode* p)
//{
//	if (p == NULL) return false;
//	LNode* s = p->next;
//	p->data = s->data;
//	p->next = s->next;
//	free(s);
//	return true;
//}
//
////��λ���ң����ص�i�����
//LNode* GetElem(LinkList L, int i)
//{
//	if (i < 0) return NULL;
//	LNode* p;
//	int j = 0;
//	p = L;
//	while (p != NULL && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//
////��ֵ���ң��ҵ�������Ϊe�Ľ��
//LNode* LocateElem(LinkList L, int e)
//{
//	LNode* p = L->next;
//	while (p != NULL && p->data != e) p = p->next;
//	return p;
//}
//
////���ĳ���
//int length(LinkList L)
//{
//	LNode* p = L->next;
//	int cnt = 0;
//	while (p != NULL)
//	{
//		cnt++;
//		p - p->next;
//	}
//	return cnt;
//}
//
////β�巨
//LinkList List_TailInsert(LinkList &L)
//{
//	int x;
//	L = (LinkList)malloc(sizeof(LNode));
//	LNode *s, *r = L;
//	scanf("%d", &x);
//	while (x != 9999)
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		r->next = s;
//		r = s;
//		scanf("%d", &x);
//	}
//	r->next = NULL;
//	return L;
//}
//
////ͷ�巨
//LinkList List_HeadInsert(LinkList &L)
//{
//	LNode *s;
//	int x;
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;
//	scanf("%d", &x);
//	while (x != 9999)
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		s->next = L->next;
//		L -> next = s;
//		scanf("%d", &x);
//	}
//	return L;
//}
//int main()
//{
//	LinkList L;//����һ��ָ��ָ������
//
//	InitList(L);
//
//	ListInsert(L, 5, 3);
//
//
//	return 0;
//}

////˫����
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct DNode
//{
//	int data;
//	struct DNode *prior, *next;
//}DNode, *DLinkList;
//
////��ʼ��
//bool InitDLinkList(DLinkList &L)
//{
//	L = (DNode*)malloc(sizeof(DNode));
//	if (L == NULL) return false;//�ڴ治�㣬����ʧ��
//	L->prior = NULL;
//	L->next = NULL;
//	return true;
//}
//
//bool Empty(DLinkList L)
//{
//	if (L->next == NULL) return true;
//	else return false;
//}
//
////��p���֮�����s���
//bool InsertNextDNode(DNode *p, DNode *s)
//{
//	if (p == NULL || s == NULL) return false;
//	s->next = p->next;
//	if (p->next != NULL)
//		p->next->prior = s;
//	s->prior = p;
//	p->next = s;
//	return true;
//}
//
////ɾ��p�ĺ�̽��
//bool DeletNextDNode(DNode *p)
//{
//	if (p == NULL) return false;
//	DNode *q = p->next;
//	if (q == NULL) return false;
//	p->next = q->next;
//	if (q->next != NULL)
//		q->next->prior = p;
//	free(q);
//	return true;
//}
//
////�������
//void testDListLink()
//{
//	DLinkList L;
//	InitDLinkList(L);
//}
//
//int main()
//{
//
//	return 0;
//}

////ѭ��������
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct LNode
//{
//	int data;
//	struct LNode *next;
//}LNode, *LinkList;
//
////��ʼ��
//bool InitList(LinkList &L)
//{
//	L = (LNode*)malloc(sizeof(LNode));
//	if (L == NULL) return false;
//	L->next = L;
//	return true;
//}
//
////�ж��Ƿ�Ϊ��
//bool Empty(LinkList &L)
//{
//	if (L->next == L) return true;
//	else return false;
//}
//
////�жϽ��p�Ƿ�Ϊѭ��������ı�β���
//bool isTail(LinkList L, LNode *p)
//{
//	if (p->next == L) return true;
//	else return false;
//}
//
//int main()
//{
//
//
//	return 0;
//}

//��̬����
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MaxSize 10
//struct Node
//{
//	int data;
//	int next;
//};
//int main()
//{
//	struct Node a[MaxSize];
//
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
////���ֳ�x��Ӧ����ɢ����ֵ
//int find(int x)
//{
//	int l = 0, r = alls.size() - 1;
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (alls[mid] >= x) r = mid;
//		else l = mid + 1;
//	}
//	return r + 1;//ӳ�䵽1,2...n
//}
//int main()
//{
//	//�洢���д���ɢ����ֵ
//	vector<int> alls;
//	//����
//	sort(alls.begin(), alls.end());
//	//ȥ���ظ�Ԫ��
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//	//unique������ȥ�أ��ظ�Ԫ�ط���ĩβ�������ط��ظ�Ԫ�ص�β�˵�
//
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef pair<int, int> PII;
//
//const int N = 300010;
//int n, m;
//int a[N], s[N];
//vector<int> alls;
//vector<PII> add, query;
//
//int find(int x)
//{
//	int l = 0, r = alls.size() - 1;
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (alls[mid] >= x) r = mid;
//		else l = mid + 1;
//	}
//	return l + 1;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int x, c;
//		cin >> x >> c;
//		add.push_back({ x,c });
//
//		alls.push_back(x);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int l, r;
//		cin >> l >> r;
//		query.push_back({ l, r });
//
//		alls.push_back(l);
//		alls.push_back(r);
//
//	}
//	//ȥ��
//	sort(alls.begin(), alls.end());
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//
//	//�������
//	for (auto item : add)
//	{
//		int x = find(item.first);
//		a[x] += item.second;
//	}
//
//	//Ԥ����ǰ׺��
//	for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
//	
//	//����ѯ��
//	for (auto item : query)
//	{
//		int l = find(item.first), r = find(item.second);
//		cout << s[r] - s[l - 1] << endl;
//	}
//	
//	
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 300010;
//int a[N], s[N];
//typedef pair<int, int> PII;
//vector<int> alls;
//vector<PII> add, query;
//int n, m;
//
//int find(int x)
//{
//	int l = 0, r = alls.size() - 1;
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (alls[mid] >= x) r = mid;
//		else l = mid + 1;
//	}
//	return l + 1;
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int x, c;
//		cin >> x >> c;
//		add.push_back({ x,c });
//
//		alls.push_back(x);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int l, r;
//		cin >> l >> r;
//		query.push_back({ l,r });
//
//		alls.push_back(l);
//		alls.push_back(r);
//	}
//
//	//ȥ��
//	sort(alls.begin(), alls.end());
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//
//	//�������
//	for (auto item : add)
//	{
//		int x = find(item.first);
//		a[x] += item.second;
//	}
//	//Ԥ����ǰ׺��
//	for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
//
//	for (auto a : query)
//	{
//		int l = find(a.first), r = find(a.second);
//		cout << s[r] - s[l - 1] << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////uniqueȥ��ʵ��
//vector<int>::iterator unique(vector<int> &a)
//{
//	int j = 0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (!i || a[i] != a[i - 1])
//			a[j++] = a[i];
//	}
//	return a.begin() + j;
//}
//int main()
//{
//
//
//	return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> PII;//����ʱ����������˵�

vector<PII> a;
int n;
void merge(vector<PII> &a)
{
	vector<PII> b;
	sort(a.begin(), a.end());

	int st = -2e9, ed = -2e9;
	for (auto item : a)
	{
		if (ed < item.first)
		{
			if (st != -2e9) b.push_back({ item.first,item.second });
			st = item.first, ed = item.second;
		}
		else ed = max(ed, item.second);
	}
	if (st != -2e9) b.push_back({ st,ed });
	a = b;
}
int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int l, r;
		cin >> l >> r;
		a.push_back({ l,r });
	}
	merge(a);
	cout << a.size() << endl;

	return 0;
}