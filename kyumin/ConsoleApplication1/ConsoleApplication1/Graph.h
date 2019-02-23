#pragma once
//2018-11-24 �׷��� ����
//- ������ ����Ʈ�� �׷��� �����ؿ���
//- ��������� �ƹ��ų� ���ϴ°ɷ�~
//- ���⼺ : �����⼺
//- �켱���� : ��������
//
//* �������
//graph
//vertex �Ǵ� node
//arch �Ǵ� edge
//
//* �ʿ� �޼ҵ�
//makeGraph
//addArch(�ʼ�)
//addVertex(�ʼ�)

#include <list>
using namespace std;
class Edge;
class Node;
class Graph
{
public:
	Graph();
	~Graph();

	Node* GetNode(int parentValue);

	void AddEdge(Node* pOwn, Node* pTarget);
	void AddNode(int newValue);
private:
	Node* GetNodeDFS(int findValue);
private:
	list<Node*> listNodes;
	list<Edge*> listEdges;
};