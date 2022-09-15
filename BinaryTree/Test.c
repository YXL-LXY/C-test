#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"Queue.h"



// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate(BTDataType* a , int* pi)
{
	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}

	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	assert(root);
	root->data = a[*pi];
	(*pi)++;

	root->left = BinaryTreeCreate(a, pi);
	root->right = BinaryTreeCreate(a, pi);

	return root;
}
// ����������
void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	BinaryTreeDestory(root->left);
	BinaryTreeDestory(root->right);
	free(root);
}
// �������ڵ����
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;

	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root != NULL && root->left == NULL && root->right == NULL)
	{
		return 1;
	}

	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

int TreeHeight(BTNode* root)
{
	if (root == NULL)
		return 0;

	int lh = TreeHeight(root->left);
	int rh = TreeHeight(root->right);

	return lh > rh ? lh + 1 : rh + 1;
}


// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	assert(k > 0);

	if (root == NULL)
		return 0;

	if (k == 1)
		return 1;

	return BinaryTreeLevelKSize(root->left, k - 1) + 
		   BinaryTreeLevelKSize(root->right, k - 1);
}
// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;

	if (root->data == x)
		return root;

	//��ȥ������
	BTNode* lret = BinaryTreeFind(root->left, x);
	if (lret)
		return lret;
	//����û�ҵ�����ȥ������
	BTNode* rret = BinaryTreeFind(root->right, x);
	if (rret)
		return rret;
	//��û�ҵ������ؿ�
	return NULL;
}
// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	printf("%c ", root->data);
	BinaryTreePrevOrder(root->left);
	BinaryTreePrevOrder(root->right);
}
// �������������
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	BinaryTreePrevOrder(root->left);
	printf("%c ", root->data);
	BinaryTreePrevOrder(root->right);
}
// �������������
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	BinaryTreePrevOrder(root->left);
	BinaryTreePrevOrder(root->right);
	printf("%c ", root->data);

}
// �������
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->data);

		//��һ�������
		if (front->left)
			QueuePush(&q, front->left);

		if (front->right)
			QueuePush(&q, front->right);
	}
	printf("\n");

	QueueDestroy(&q);
}
// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		if (front == NULL)
		{
			break;
		}

		QueuePush(&q, front->left);
		QueuePush(&q, front->right);
	}

	// �������Ժ󣬺���ȫ�ǿգ�������ȫ������
	// �������Ժ󣬺�����ڷǿգ�������ȫ������
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front != NULL)
		{
			QueueDestroy(&q);
			return false;
		}
	}

	QueueDestroy(&q);
	return true;
}


BTNode* CreateTree()
{
	BTNode* n1 = (BTNode*)malloc(sizeof(BTNode));
	n1->data = 'A';
	BTNode* n2 = (BTNode*)malloc(sizeof(BTNode));
	n2->data = 'B';
	BTNode* n3 = (BTNode*)malloc(sizeof(BTNode));
	n3->data = 'C';
	BTNode* n4 = (BTNode*)malloc(sizeof(BTNode));
	n4->data = 'D';
	BTNode* n5 = (BTNode*)malloc(sizeof(BTNode));
	n5->data = 'E';
	BTNode* n6 = (BTNode*)malloc(sizeof(BTNode));
	n6->data = 'F';
	BTNode* n7 = (BTNode*)malloc(sizeof(BTNode));
	n7->data = 'G';
	BTNode* n8 = (BTNode*)malloc(sizeof(BTNode));
	n8->data = 'H';

	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n3->left = n6;
	n3->right = n7;
	n4->left = NULL;
	n4->right = NULL;
	n5->left = NULL;
	n5->right = n8;
	n6->left = NULL;
	n6->right = NULL;
	n7->left = NULL;
	n7->right = NULL;
	n8->left = NULL;
	n8->right = NULL;

	return n1;
}

int main()
{
	/*BTNode* root = CreateTree();
	BinaryTreePrevOrder(root);
	printf("\n");

	printf("%d \n", BinaryTreeSize(root));
	printf("%d \n", BinaryTreeLeafSize(root));
	
	printf("%d\n", BinaryTreeLevelKSize(root, 3));
	printf("%p\n", BinaryTreeFind(root, 'E'));


	BinaryTreeDestory(root);
	root = NULL;*/

	BTDataType* a = "ABD##E#H##CF##G##";
	int pi = 0;
	BTNode* root = BinaryTreeCreate(a,&pi);
	//BinaryTreePrevOrder(root);
	BinaryTreeLevelOrder(root);
	int ret = BinaryTreeComplete(root);
	printf("%d ", ret);
	BinaryTreeDestory(root);

}