#pragma once
class Sort
{
public:
	Sort();
	~Sort();

public:
	//공통합수
	void Swap(int& origin, int& dest);
public:
	/// 퀵솔트
	void Quick(int* pArr, int arrCount);
private:
	void QuickSort(int* pArr, int left, int right);
	int Divided(int* pArr, int left, int right);

public:
	/// 삽입정렬
	void Insert(int* pArr, int arrCount);
	void PushArr(int *pArr, int start, int end);

	//합병정렬
public:
	void Merge(int* pArr, int left, int mid, int right);
	void Merge_Divided(int* pArr, int left, int right);
};

