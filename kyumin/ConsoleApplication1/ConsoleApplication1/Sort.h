#pragma once
class Sort
{
public:
	Sort();
	~Sort();

public:
	//�����ռ�
	void Swap(int& origin, int& dest);
public:
	/// ����Ʈ
	void Quick(int* pArr, int arrCount);
private:
	void QuickSort(int* pArr, int left, int right);
	int Divided(int* pArr, int left, int right);

public:
	/// ��������
	void Insert();


};

