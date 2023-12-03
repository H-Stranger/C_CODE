//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
//typedef char DataType;
//typedef struct BinaryTreeNode
//{
//	DataType x;
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//}BTN;
//
//
////ǰ�����
//void Preorder(BTN* root)
//{
//	//�����򲻴�ӡ
//	if (root == NULL)
//	{
//		return;
//	}
//	//�ȴ�ӡ���ٴ����������ݹ�
//	printf("%c ", root->x);
//	Preorder(root->left);
//	Preorder(root->right);
//
//}
////�������
//void Inorder(BTN* root)
//{
//	//�����򲻴�ӡ
//	if (root == NULL)
//	{
//		return;
//	}
//	//���������ݹ飬�ٴ�ӡ����Ȼ���������ݹ�
//	Inorder(root->left);
//	printf("%c ", root->x);
//	Inorder(root->right);
//}
////�������
//void Backorder(BTN* root)
//{
//	//�����򲻴�ӡ
//	if (root == NULL)
//	{
//		return;
//	}
//	//�����������ݹ��ٴ�ӡ��
//	Backorder(root->left);
//	Backorder(root->right);
//	printf("%c ", root->x);
//}
//
////Ҷ�ڵ����
//int leafSize(BTN* root)
//{
//	//��ΪNULL
//	if (root == NULL)
//	{
//		return 0;
//	}
//	//Ҷ�ڵ������ΪNULL
//	if (root->left == NULL && root->right == NULL)
//	{
//		return 1;
//	}
//	//���������ڵ����������µݹ�
//	return leafSize(root->left) + leafSize(root->right);
//}
//
////ǰ��洢
//
///* ��size�ĵ�ַ����Ϊÿ�ε��ú����ַ�����ֵһ�Σ�size��Ҫ++��
//������β����޷���size++����Ľ�����������������������õĺ����У�������ͬʱ���õ�size�� */
//BTN* CreatTree(char* str, int* size)
//{
//	//����#��Ϊ��
//	if (str[*size] == '#')
//	{
//		//ָ��������ַ��������ƶ�
//		++(*size);
//		return NULL;
//	}
//	//������
//	BTN* root = (BTN*)malloc(sizeof(BTN));
//	if (root == NULL)
//	{
//		printf("malloc failed\n");
//		exit(-1);
//	}
//	//����Ԫ�ش���������
//	root->x = str[(*size)++];
//	//�������������������ݹ鸳ֵ
//	root->left = CreatTree(str, size);
//	root->right = CreatTree(str, size);
//	return root;
//}
//
////���ٶ�����
//void DestroyTree(BTN* root)
//{
//	//��ΪNULL�ݹ�ֹͣ
//	if (root == NULL)
//	{
//		return;
//	}
//	//�ҵ�������������Ϊ����free
//	DestroyTree(root->left);
//	DestroyTree(root->right);
//
//	free(root);
//	root = NULL;
//}
//
//int main()
//{
//	//�����������
//	char str[30];
//	int size = 0;
//	scanf("%s", str);
//
//	BTN* root = CreatTree(str, &size);
//
//	Preorder(root);
//	printf("\n");
//	Inorder(root);
//	printf("\n");
//	Backorder(root);
//	printf("\n");
//
//
//	printf("��������%d��Ҷ�ڵ�\n", leafSize(root));
//
//	DestroyTree(root);
//	return 0;
//}