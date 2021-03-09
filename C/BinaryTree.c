#include"BinaryTree.h"
#include<stdio.h>
#include<stdlib.h>

BTreeNode *MakeBTreeNode(void)
{
	BTreeNode *nd;
	nd = (BTreeNode *)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

BTData GetData(BTreeNode *bt)
{
	return (bt->data);
}

void SetData(BTreeNode *bt, BTData data)
{
	bt->data = data;
}

BTreeNode *GetLeftSubTree(BTreeNode *bt)
{
	return (bt->left);
}

BTreeNode *GetRightSubTree(BTreeNode *bt)
{
	return (bt->right);
}

void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub)
{
	if(main->left != NULL)
		free(main->left);

	main->left = sub;
}

void MakeRightSubTree(BTreeNode *main, BTreeNode *sub)
{
	if(main->right != NULL)
		free(main->right);

	main->right = sub;
}

void DeleteTree(BTreeNode *bt)
{
	if(bt->left)
		DeleteTree(bt->left);
	if(bt->right)
		DeleteTree(bt->right);
//	printf("delete: %d\n",bt->data);
	free(bt);
}


void InorderTraverse(BTreeNode *bt, VisitFuncPtr action)
{
    if(bt == NULL)
        return;
    InorderTraverse(bt->left,action);
    action(bt->data);
    InorderTraverse(bt->right,action);
}

void PreorderTraverse(BTreeNode *bt, VisitFuncPtr action)
{
    if(bt == NULL)
        return;
	action(bt->data);
    PreorderTraverse(bt->left,action);
    PreorderTraverse(bt->right,action);
}

void PostorderTraverse(BTreeNode *bt, VisitFuncPtr action)
{
    if(bt == NULL)
        return;
    PostorderTraverse(bt->left,action);
    PostorderTraverse(bt->right,action);
	action(bt->data);
}

