// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include "Sort.h"
#include "Hashtable.h"
#include <vector>
#include <queue>
#include <list>
using namespace std;

//int solution(int bridge_length, int weight, vector<int> truck_weights)
//{
//	int answer = 0;
//	size_t l = truck_weights.size();
//	int runWeightSum = 0;
//	queue<int> runningInex;
//	list<int> runningDis;
//	int currentIndex = 0;
//	int maxCount = truck_weights.size();
//	//움직인 거리체크는??
//	while (currentIndex < maxCount)
//	{
//		// 중간계산이 빠짐....
//		if (runWeightSum < weight)
//		{
//			runWeightSum += truck_weights[currentIndex];
//			runningInex.push(currentIndex);
//			runningDis.push_back(1);
//			currentIndex++;
//		}
//		else
//		{
//			auto iter = runningDis.begin();
//			while (true)
//			{
//				++(*iter);
//				if ((*iter) >= bridge_length)
//				{
//					runningDis.remove((*iter));
//					runWeightSum -= truck_weights[runningInex.front()];
//					runningInex.pop();
//				}
//				++iter;
//			}
//		}
//		answer++;
//	}
//	return answer;
//}

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
	int answer = 0;
	size_t l = truck_weights.size();
	int runWeightSum = 0;
	int currentIndex = 0;
	int maxCount = truck_weights.size();
	list<int> indexs;
	list<int> movedis;
	//움직인 거리체크는??
	while (currentIndex < maxCount)
	{
		runWeightSum += truck_weights[currentIndex];
		if (runWeightSum > weight) //무게를초과했다면
		{
			if (currentIndex < maxCount)
				runWeightSum -= truck_weights[currentIndex];

			runWeightSum -= truck_weights[indexs.front()];
		}
		else
		{
			movedis.push_back(1);
			indexs.push_back(currentIndex++);
		}
		if (!movedis.empty());
		{
			auto iter = movedis.begin();
			if (++(*iter) == bridge_length)
			{
				movedis.remove(movedis.front());
			}
			iter = movedis.begin();
			auto iterend = movedis.end();
			while (iter != iterend)
			{
				(*iter)++;
				iter++;
			}
		}
	}
	while (!indexs.empty())
	{
		if (indexs.size() > 1)
			answer++;
		else
			answer += bridge_length;
		indexs.pop();
	}
	
	return answer + 1;
}
int main()
{
	//vector<int> v = {7, 4, 5, 6};
	vector<int> v = { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
	std::cout << solution(100, 100, v);

	return 0;
	Hashtable<int> table;

	int* parr = new int[8] { 69, 10, 30, 2, 16, 8, 31, 22 };

	for (int i = 0; i < 8; ++i)
	{
		parr[i] = rand();
	}
	Sort sort;
	//sort.Quick(parr, 8);
	sort.Insert(parr, 8);
	for (int i = 0; i < 8; ++i)
		std::cout << parr[i] << '\t';
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
