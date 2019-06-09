#include "pch.h"
#include "Graph.h"
#include "Node.h"
#include "Edge.h"

Graph::Graph()
{
}

Graph::~Graph()
{
}

Node* Graph::GetNode(int findValue)
{
	//DFS, BFS 방식으로 찾기
	/*Node* pnode = nullptr;
	auto iter = listEdges.begin();
	while (iter != listEdges.end())
	{
		if ((*iter)->EqualValue(findValue))
		{
			pnode = (*iter);
			break;
		}
	}
	return pnode;*/
	return nullptr;
}

Node* Graph::GetNodeDFS(int findValue)
{
	//DFS, BFS 방식으로 찾기
	//Node* pnode = nullptr;
	//auto iter = listEdges.begin();
	//while (iter != listNodes.end())
	//{
	//	if ((*iter)->EqualValue(findValue))
	//	{
	//		pnode = (*iter);
	//		break;
	//	}
	//	else
	//	{
	//	//	(*iter)->FindDFS(findValue);
	//	}
	//}
	//return pnode;
	return nullptr;
}

//void Graph::AddEdge(int ownValue, int targetValue)
//{
//	//Edge* pEdge = ;
//	//listNodes.
//	//listEdges.push_back(&Edge(pOwn, pTarget));
//}

void Graph::AddNode(int newValue)
{
	Node* pNode = new Node(newValue);
	listNodes.push_back(pNode);
}
