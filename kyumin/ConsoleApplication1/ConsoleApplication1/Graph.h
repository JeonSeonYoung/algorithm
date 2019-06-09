#pragma once
//2018-11-24 그래프 설계
//- 연결형 리스트로 그래프 구현해오기
//- 구현모습은 아무거나 원하는걸로~
//- 방향성 : 무방향성
//- 우선순위 : 오름차순
//
//* 구성요소
//graph
//vertex 또는 node
//arch 또는 edge
//
//* 필요 메소드
//makeGraph
//addArch(필수)
//addVertex(필수)

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