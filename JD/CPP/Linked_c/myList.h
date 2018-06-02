#include <stdlib.h>
#include <iostream>

using namespace std;

struct node{
	int iNum;
	node *nNext;
};

struct hNode{
	node *nDock;
};

void InitList(hNode *&hHead)
{
	hHead=(hNode *)malloc(sizeof(hNode));
	hHead -> nDock = NULL;
}

void Push(hNode *nTop, int iNewNum)
{
	node *nTemp;
	nTemp = (node *)malloc(sizeof(node));
	nTemp -> iNum = iNewNum;
	nTemp -> nNext = nTop -> nDock;
	nTop -> nDock = nTemp;
	
}

bool Pop(hNode *nTop)
{
	node *nDel;
	nDel = nTop->nDock;
	if (nDel==NULL) {
		return false;
	}
	nTop->nDock=nDel->nNext;
	free(nDel);
	return true;
}

void EnQueue(hNode *Front,hNode *Rear, int iNewNum)		//�����͸� ��ȯ�ϱ����ؼ��� ������ �Լ��� ����ؾ߸� ��.
{
	node *New;
		New=(node *)malloc(sizeof(node));
		New->iNum = iNewNum;

	if(Front->nDock == NULL)
	{
		New->nNext = Front ->nDock;
		Front->nDock = New;
	//	Rear->nDock = New;
	}
	else
	{
		New->nNext=Rear->nDock->nNext;
		Rear->nDock->nNext = New;
	//	Rear->nDock = New;
	}
	Rear->nDock = New;
}

bool DeQueue(hNode *nTop)
{
	node *nDel;
	nDel = nTop->nDock;
	if (nDel==NULL) {
		return false;
	}
	nTop->nDock=nDel->nNext;
	free(nDel);
	return true;
}
void SortStack(hNode *&hHead)
{
	node *nNew;
	node *nSort;
	nNew = hHead->nDock;

	//�ι�° ��尡 ������� ������ �ʴ´�.
	if(hHead->nDock->nNext == NULL)
	{}

	//���� ���Ե� ��尡 �ι�° ��庸�� ���� Ŭ���� �̵��� �ʿ䰡 �����Ƿ� ����!
	else if(hHead->nDock->iNum < hHead->nDock->nNext->iNum)
	{
		//���� ������ ����� ���ڰ� List�� ����Ǿ� �ִ� ���ں��� Ŭ������ ���������� �˻� �̵��Ѵ�.
		//���ϴ� ���� nSort->nNext->iNum�� ������ 
		//nSort->nNext(�˻���� �� ���)�� nSort->nNext->nNext(�˻����) �� �� ��� �ʿ��ϱ� ���� �Դϴ�.
		for(nSort=nNew; nNew->iNum < nSort->nNext->iNum; nSort=nSort->nNext)
		{
			//���� �˻��ϴ� ����� �����ּҰ� ������� ��� �˻� ����
			if(nSort->nNext->nNext==NULL)
				break;
		}
		//�˻��� ����� ������尡 ���� �˻��� ����� ���� ������ ������ �������
		if(nSort->nNext->nNext==NULL && nSort->nNext->iNum < nNew->iNum)
		{
			hHead->nDock=nNew->nNext;
			nNew->nNext=nSort->nNext;
			nSort->nNext=nNew;
			//(�������) ^^^^ (�˻����)  (NULL)
			//		  (���Գ��)
		}
		//�˻��� ����� ������尡 ���� �˻��� ����� ���� ������ ������ Ŭ���
		else if(nSort->nNext->nNext==NULL)
		{
			hHead->nDock=nNew->nNext;
		//	cout << nNew->iNum << endl;
		//	cout << nNew->nNext << endl;
		//	cout << nSort->nNext->nNext;
			system("pause");
		//	nNew->nNext=nSort->nNext->nNext; // ���� nNew->nNext=NULL�ε� �� �ȵɱ�?
			nSort->nNext->nNext=nNew;
			nNew->nNext=NULL;
			//(�������) (�˻����) ^^^^  (NULL)
			//			         (���Գ��)
		}
		//��� �߰��� ���Ե� ���
		else
		{
			hHead->nDock=nNew->nNext;
			nNew->nNext=nSort->nNext;
			nSort->nNext=nNew;
		}
	}
	//���� ��!!
}
/*
Node *SortQ(Node **head,Node **Rear,Node **NewRe)
{
	Node *newNo;
	Node *nSort;
	Node *ReTu;
	newNo=(*NewRe);
	nSort=(*head);
	//�ι�° ��尡 ���ų� ������ ��庸�� �� ��尡 Ŭ��� ������ �ʴ´�.
	if((*head)->next->next == NULL || newNo->num > (*Rear)->num)
	{
// �̵����� ������� ���� ���Ե� ��尡 Rear�� �ȴ�.
		ReTu = (*NewRe);
	}
//���� ���Ե� ��尡 ��忡 �ִ� ������ Ŭ���� �̵��� �ʿ䰡 �����Ƿ� ����!
	else if(newNo->num <= (*Rear)->num)//���� ���Ե� ��尡 ���� �������
	{
		//���� ������ ����� ���ڰ� ����Ǿ� �ִ� ���ں��� Ŭ ��� �������� �̵�
		for(nSort=(*head); newNo->num > nSort->next->num; nSort=nSort->next)
		{}
// ��� �̵� �˰��� (�� ��尪���� ū ��带 ã�� ã�� ��� �տ� �����ϴ� ���)
		newNo->next=nSort->next;
		nSort->next=newNo;
		(*Rear)->next=NULL;
// �̵��Ͽ��� ��� �� ��带 ����Ű�� ��尡 Rear�� �ȴ�.
		ReTu = (*Rear);
	}
// Ȯ�ν� �ּ�����! ����
//	Printing(*head);
	return ReTu;
}
*/



void Printing(hNode *head)
{
	node *Start;
	for (Start=head->nDock;Start;Start=Start->nNext) {
		cout << "|"<< Start -> iNum <<"|"<<endl;
	}
	cout << "---" << endl;
	printf("\n");
}

