#include "BinarySearchTree.h"
#include<stdio.h>
#include<stdlib.h>

void BSTMakeAndInit(BTreeNode **pRoot)
{

// remove when clearly understood
#if 0
	pRoot = (BTreeNode **)malloc(sizeof(BTreeNode *));
	*pRoot->left = NULL;
	*pRoot->right = NULL;
	*pRoot->data = 0;
#endif
	*pRoot = NULL;
}

BSTData BSTGetNodeData(BTreeNode *bst)
{
	return GetData(bst);
}

void BSTInsert(BTreeNode **pRoot, BSTData data)
{

// remove when clearly understood
#if 0
	if(!pRoot)
		return;

	if(*pRoot->data < data)
	{   if(*pRoot->left)
		 	BSTInsert(*pRoot->left, data);
		else
		{
			*pRoot->left = (BTreeNode *)malloc(sizeof(BTreeNode));
			*pRoot->left->data = data;
			return;
		}
	}
	else if(*pRoot->data > data)
	{
		if(*pRoot->right)
			BSTInsert(*pRoot->right, data);
		else
		{
			*pRoot->right = (BTreeNode *)malloc(sizeof(BTreeNode));
			*pRoot->right->data = data;
			return;
		}
	}
#endif
	BTreeNode * pNode = NULL; //parent node 
	BTreeNode * cNode = *pRoot; //current node
	BTreeNode * nNode = NULL; //new node

	//새로운 노드가(새 데이터가 담긴 노드가)추가될 위치를 찾는다.
	while(cNode != NULL)
	{
		if(data == GetData(cNode))
			return;

		pNode = cNode;
		if(GetData(cNode) > data)
			cNode = GetLeftSubTree(cNode);
		else
			cNode = GetRightSubTree(cNode);
	}
	
	// pNode의 자식 노드로 추가할 새 노드의 생성
	nNode = MakeBTreeNode();
	SetData(nNode, data);

	// pNode의 자식 노드로 새 노드를 추가
	if(pNode != NULL)
	{
		if(data < GetData(pNode))
			MakeLeftSubTree(pNode,nNode);
		else
			MakeRightSubTree(pNode,nNode);
	}
	else
		*pRoot = nNode;

}

BTreeNode * BSTSearch(BTreeNode *bst, BSTData target)
{

// remove when clearly understood
#if 0
	if(bst->data == target)
		return bst;
	else if(bst->data < target && bst->left)
		return BSTSearch(bst->left, target);
	else if(bst->data > target && bst->right)
		return BSTSearch(bst->right, target);
#endif
  BTreeNode * cNode = bst; //current node
  BSTData cd; //current data

  while(cNode != NULL)
  {
	  cd = GetData(cNode);

	  if(target == cd)
		  return cNode;
	  else if(target < cd)
		  cNode = GetLeftSubTree(cNode);
	  else 
		  cNode = GetRightSubTree(cNode);
  }

  return NULL; // 탐색 대상이 저장되어 있지 않음
}

BTreeNode * BSTRemove(BTreeNode **pRoot, BSTData target)
{
	// 삭제 대상이 루트 노드인 경우를 별도로 고려해야한다.
	BTreeNode *pVRoot = MakeBTreeNode();
	BTreeNode *pNode = pVRoot;
	BTreeNode *cNode = *pRoot;
	BTreeNode *dNode;

	// 루트 노드를 pVRoot가 가리키는 노드의 오른쪽 자식 노드가 되게 한다.
	ChangeRightSubTree(pVRoot, *pRoot);

	// 삭제 대상인 노드를 탐색
	while(cNode != NULL && GetData(cNode) != target)
	{
		pNode = cNode;
        if(target < GetData(cNode))
			cNode = GetLeftSubTree(cNode);
		else
			cNode = GetRightSubTree(cNode);
	}

	//삭제 대상 존재하지 않는 경우
	if(cNode == NULL)
		return NULL;

	dNode = cNode; // 삭제 대상을 dNode가 가리키게 한다.

	// 첫 번째 경우: 삭제 대상이 단말 노드인 경우
	if(GetLeftSubTree(dNode) == NULL && GetRightSubTree(dNode) == NULL)
	{
		if(GetLeftSubTree(pNode) == dNode)
			RemoveLeftSubTree(pNode);
		else
			RemoveRightSubTree(pNode);
	}

	// 두 번째 경우: 삭제 대상이 하나의 자식 노드를 갖는 경우
	else if(GetLeftSubTree(dNode) == NULL || GetRightSubTree(dNode) == NULL)
	{
		BTreeNode * dcNode; // 삭제 대상의 자식 노드 카리킴

		if(GetLeftSubTree(dNode) != NULL)
			dcNode = GetLeftSubTree(dNode);
		else
			dcNode = GetRightSubTree(dNode);

		if(GetLeftSubTree(pNode) == dNode)
			ChangeLeftSubTree(pNode, dcNode);
		else
			ChangeRightSubTree(pNode, dcNode);
	}
	// 세 번째 경우: 두 개의 자식 노드를 모두 갖는 경우
	else
	{
		BTreeNode * mNode = GetRightSubTree(dNode); // 대체 노드 가리킴
		BTreeNode * mpNode = dNode; // 대체 노드의 부모 노드 카리킴
		int delData;

		// 삭제 대상의 대체 노드를 찾는다.
		while(GetLeftSubTree(mNode) != NULL)
		{
			mpNode = mNode;
			mNode = GetLeftSubTree(mNode);
		}

		// 대체 노드에 저장된 값을 삭제할 노드에 대입한다.
		delData = GetData(dNode);
		SetData(dNode, GetData(mNode));

		// 대체 노드의 부모 노드와 자식 노드를 연결한다.
		if(GetLeftSubTree(mpNode) == mNode)
			ChangeLeftSubTree(mpNode, GetRightSubTree(mNode));
		else
			ChangeRightSubTree(mpNode, GetRightSubTree(mNode));

		dNode = mNode;
		SetData(dNode, delData); //백업 데이터 복원
	}

	// 삭제된 노드가 루트 노드인 경우에 대한 추가적인 처리
	if(GetRightSubTree(pVRoot) != *pRoot)
		*pRoot = GetRightSubTree(pVRoot); // 루트 노드의 변경을 반영

	free(pVRoot); // 가상 루트 노드의 소멸
	return dNode; // 삭제 대상의 반환
}

void ShowIntData(int data)
{
	printf("%d ",data);
}

void BSTShowAll(BTreeNode *bst)
{
	InorderTraverse(bst, ShowIntData);
}
