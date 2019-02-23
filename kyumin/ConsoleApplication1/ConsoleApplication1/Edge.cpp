#include "pch.h"
#include "Edge.h"

Edge::Edge()
	: pOwn(nullptr)
	, pTarget(nullptr)
	, isNeighborhood(false)
{

}

Edge::Edge(Node* pOwn, Node* pTarget)
	:pOwn(pOwn)
	, pTarget(pTarget)
	, isNeighborhood(false)
{
}

Edge::~Edge()
{
}
//
//Node * Edge::FindBFS(_int findValue)
//{
//	//pTarget->CheckValue(findValue);
//	return nullptr;
//}
