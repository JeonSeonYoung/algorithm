#include "pch.h"
#include "Hashtable.h"

template<typename T>
Hashtable<T>::Hashtable()
{
}

template<typename T>
Hashtable<T>::~Hashtable()
{
}

template<typename T>
inline void Hashtable<T>::AddValue(char * name, T value)
{
	//name �� �ؽ�ȭ �Ͽ� Ű���� ���Ѵ�.
	/*char[] arr = name;
	int hash = 0;
	for (int i = 0; i < arrCount; ++i)
	{
		hash = hash * 31 + name[i];
	}*/

	//���� �����ö��� ���� �ؽ�ȭ�� ������ Node�� �����´�.
	//���� �浹�� ���� �������� ���� �Ǿ��ٸ� �̶����ʹ� ���� ���Ͽ� �����´�.

}

template<typename T>
int Hashtable<T>::HashFunction(char * name)
{
	return 0;
}
