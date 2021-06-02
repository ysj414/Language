#include "SimpleHeap.h"

void HeapInit(Heap *ph)
{
	ph->numOfData = 0;
}

int HIsEmpty(Heap * ph)
{
	if(ph->numOfData == 0)
		return TRUE;
	else
		return FALSE;
}

int GetParentIDX(int idx)
{
	return idx/2;
}

int GetLChildIDX(int idx)
{
	return idx*2;
}

int GetRChildIDX(int idx)
{
	return GetLChildIDX(idx)+1;
}

/* 함수 설명: index 값을 전달하면, 이 노드의 두 자식 노드 중에서 우선순위가 높은 것의 인덱스 값을 반환
 * 인자로 전달된 노드에 자식 노드가 없으면 0을 반환하고, 자식 노드가 하나인 경우에는 그 노드의 인덱스 값을 반환
 */
int GetHiPriChildIDX(Heap *ph, int idx)
{
	// no child node
	if(GetLChildIDX(idx) > ph->numOfData)
		return 0;
	// there is only left node 하나뿐인 자식 노드는 왼쪽 자식 노드이다. 그리고 힙의 마지막 노드이다.
	else if(GetLChildIDX(idx) == ph->numOfData)
		return GetLChildIDX(idx);
	// there are two nodes
	else
	{
		// right child has higher priority
		if(ph->heapArr[GetLChildIDX(idx)].pr > ph->heapArr[GetRChildIDX(idx)].pr)
			return GetRChildIDX(idx);
		// left child has higher priority
		else
			return GetLChildIDX(idx);
	}
}

void HInsert(Heap *ph, HData data, Priority pr)
{
	int idx = ph->numOfData+1;
	HeapElem nelem = {pr,data};

	//새 노드가 저장될 위치가 루트 노드의 위치가 아니라면 while문 반복
	while(idx != 1)
	{
		//새 노드와 부모 노드의 우선순위 비교
		if(pr < (ph->heapArr[GetParentIDX(idx)].pr)) //새 노드의 우선순위 높다면
		{
			// 부모 노드를 한 레벨 내림, 실제로 내림
			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
			// 새 노드를 한 레벨 올림, 실제로 올리지는 않고 인덱스 값만 갱신
			idx = GetParentIDX(idx);

		}
		else // 새 노드의 우선순위가 높지 않다면
			break;
	}
	ph->heapArr[idx] = nelem; // 새 노드를 배열에 저장
	ph->numOfData +=1;
}

HData HDelete(Heap *ph)
{
	HData retData = (ph->heapArr[1]).data;
	HeapElem lastElem = ph->heapArr[ph->numOfData];

	int parentIdx = 1;
	int childIdx;

	while(childIdx = GetHiPriChildIDX(ph,parentIdx))
	{
	
		if(lastElem.pr <= ph->heapArr[childIdx].pr)
			break; //마지막 노드의 우선순위가 높으면 반복문 탈출!
		
		// 마지막 노드보다 우선순위 높으니, 비교대상 노드의 위치를 한 레밸 올림
		ph->heapArr[parentIdx] = ph->heapArr[childIdx];
		parentIdx = childIdx; //마지막 노드가 저장될 위치정보를 한 레밸 내림
		// 반복문 탈출하면 parentIdx에는 마지막 노드의 위치정보가 저장됨
	}

	ph->heapArr[parentIdx] = lastElem; //마지막 노드 최종 저장
	ph->numOfData -= 1;
	return retData;
}
