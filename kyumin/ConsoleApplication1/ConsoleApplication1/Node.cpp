#include "pch.h"
#include "Node.h"
#include "Edge.h"

Node::Node(_int newValue)
	: value(newValue)
{
}


Node::~Node()
{
}

void Node::AddEdge(Edge* pEdge)
{
	listNeighborhood.push_back(pEdge);
}

bool Node::EqualValue(_int findValue)
{
	return findValue == value;
}

Node* Node::FindBFS(_int findValue)
{
	//Node* pFindNode = nullptr;
	//if (listChild.size() > 0)
	//{
	//	auto iter = listChild.begin();
	//	auto iterEnd = listChild.end();
	//	while (iter != iterEnd)
	//	{
	//		if ((*iter)->value == findValue)
	//		{
	//			return *iter;
	//		}
	//		//else if((*iter)->
	//	}
	//}
	//return pFindNode;
	return nullptr;
}
