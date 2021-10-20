#ifndef __EXPRESSION_TREE__
#define __EXPRESSION_TREE__

#include "BinaryTree.h"

BTreeNode *MakeExpTree(char exp[]); // 수식 트리 구성
int EvaluateExpTree(BTreeNode *bt); // 수식 트리 계산

void ShowPrefixTypeExp(BTreeNode *bt); // 전위 표기법 기반 출력
void ShowInfixTypeExp(BTreeNode *bt); // 중위 표기법 기반 출력
void ShowPostTypeExp(BTreeNode *bt); // 후위 표기법 기반 출력

#endif
