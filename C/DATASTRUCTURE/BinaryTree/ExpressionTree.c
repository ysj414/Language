#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "ListBaseStack.h"
#include "BinaryTree.h"


BTreeNode *MakeExpTree(char exp[])
{
	Stack stack;
	BTreeNode * pnode;

	int expLen = strlen(exp);
	int i;

	for(i=0; i<explen; i++)
	{
		pnode = MakeBTreeNode();

		if(isdigit(exp[i]))
			SetData(pnode, exp[i]-'0');
		else
		{
			MakeRightSubTree(pnode, SPop(&stack));
			MakeLeftSubTree(pnode, SPop(&stack));
			SetData(pnode, exp[i]);
		}

		SPush(&stack);
	}
}

int EvaluateExpTree(BTreeNode *bt)
{

}

void ShowNodeData(int data)
{
	if(0<=data && data<=9)
		printf("%d ", data);
	else
		printf("%c ",data);
}

void ShowPrefixTypeExp(BTreeNode *bt)
{
	PreorderTraverse(bt, ShowNodeData);
}

void ShowInfixTypeExp(BTreeNode *bt)
{
	InorderTraverse(bt, ShowNodeData);
}

void ShowPostfixTypeExp(BTreeNode *bt)
{
	PostorderTraverse(bt, ShowNodeData);
}

