#include "HashTable.h"

template<typename T>
HashTable<T>::HashTable()
	: Capacity(1061), TableCount(0)
{
	tables = new Table *[Capacity];
	memset(tables, 0, sizeof(Table) * Capacity);
}

template<typename T>
HashTable<T>::~HashTable()
{
	delete tables;
}

template<typename T>
inline void HashTable<T>::Add(T* value)
{
	//�ּҰ��� �ؽ�ȭ �Ѵ�?
	// TableCount �� ������ 80%���Ѿ� ������� ������ �ø��� �̵��ϴ� �۾��� �Ѵ�.
		// ������ �ʿ���� ��� ����ȭ ������� �˰�����
	Node* pnewNode = new Node();
	pnewNode->key = Hash_Function(value);
	pnewNode->value = value;
	if (tables[pnewNode->key] == nullptr)
	{
		tables[pnewNode->key] = new Table();
		TableCount++;
	}
	tables[pnewNode->key]->AddNode(pnewNode);
}

template<typename T>
inline T * HashTable<T>::Find(T* value)
{
	int key = Hash_Function(value);
	tables[key].Find(value);
	return NULL;
}

template<typename T>
int HashTable<T>::Hash_Function(const T* adrres)
{
	return reinterpret_cast<int>(*adrres) % Capacity;
}
