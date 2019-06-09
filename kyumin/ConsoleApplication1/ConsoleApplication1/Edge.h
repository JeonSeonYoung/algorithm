#pragma once

#include "Node.h"

class Edge
{
public:
	Edge();
	Edge(Node* pOwn, Node* pTarget);
	~Edge();


//	Node* FindBFS(int findValue);

	bool IsNeighborhood()			{ return isNeighborhood; }
	void SetOwn(Node* pOwn)			{ this->pOwn = pOwn; }
	void SetTarget(Node* pTarget)	{ this->pTarget = pTarget; }
private:
	bool isNeighborhood;
	Node* pOwn;
	Node* pTarget;

public:
	static Edge* Create(_int ownData, _int targetData)
	{
		Edge* p = new Edge(new Node(ownData), new Node(targetData));
		return p;
	}
};

