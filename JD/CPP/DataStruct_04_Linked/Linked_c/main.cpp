#include "myList.h"




void main()
{
	///// ���������
	hNode *hStackHead;
	hNode *hQueueHead;
	hNode *hQueueTail;

	char cChoice;
	int iNum;

	///// �޸� �Ҵ�
	InitList(hStackHead);
	InitList(hQueueHead);
	InitList(hQueueTail);

	while(true)
	{
	//	system("cls");

		cout << "1. Ǫ�� ���"<<endl;
		cout << "2. �� "<<endl;
		cout << "3. ��ť "<<endl;
		cout << "4. ��ť "<<endl;
		cout << "5. ���� ��� "<<endl;
		cout << "6. ť ��� "<<endl;
		cout << "0. ���� "<<endl;
		cout << "�����ض� : ";
		cin >> cChoice;
		switch(cChoice)
		{
		case '1':
			cout << "�󸶳����� "<<endl;
			cin >> iNum;
			Push(hStackHead,iNum);
			Printing(hStackHead);
			SortStack(hStackHead);
			Printing(hStackHead);
		//	system("pause");
			break;

		case '2':
			Pop(hStackHead);
			break;

		case '3':
			cout << "�󸶳����� "<<endl;
			cin >> iNum;
			EnQueue(hQueueHead,hQueueTail,iNum);
			
			break;

		case '4':
			DeQueue(hQueueHead);
			break;

		case '5':
			Printing(hStackHead);
			system("pause");
			break;

		case '6':
			Printing(hQueueHead);
			system("pause");
			break;

		case '0':
			cout << "���Ḧ �����ϼ̽��ϴ�." << endl;
			return;

		default :
			cout << "�߸� �����ϼ̽��ϴ�." << endl;
			system("pause");
		}

	}

	





}
