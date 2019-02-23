#pragma once

#include <list>
typedef int _int;

using namespace std;
class Edge;
class Node
{
public:
	Node(_int newValue);
	~Node();

	void AddEdge(Edge* pEdge);
	bool EqualValue(_int findValue);
	Node* FindBFS(_int findValue);
private:
	_int value;
	list<Edge*> listNeighborhood;

};

