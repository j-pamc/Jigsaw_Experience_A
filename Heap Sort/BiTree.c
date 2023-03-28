#include "BiTree.h"
#include <stdlib.h>
#include <stdio.h>

struct node *newNode(int data)
{
    struct node *newData = (struct node *)malloc(sizeof(struct node));
    newData->data = data;
    newData->left = newData->right = NULL;
    return newData;
}

struct BinaryTree *Init()
{
    struct BinaryTree *Bitree = (struct BinaryTree *)malloc(sizeof(struct BinaryTree));
    Bitree->root = NULL;
    return Bitree;
}

struct node *AddNodeRecursive(struct node *root, int data)
{
    struct node *newData = newNode(data);
    if (root == NULL)
        root = newData;
    else
    {
        if (data > root->data)
            root->right = AddNodeRecursive(root->right, data);
        else
            root->left = AddNodeRecursive(root->left, data);
    }

    return root;
}

void AddNode(struct BinaryTree* tree, int data)
{
   tree->root = AddNodeRecursive(tree->root, data);
}

void PreOrderTransversal(struct node* focusNode)
{
    if (focusNode != NULL)
    {
        printf("%d -> ", focusNode->data);
        PreOrderTransversal(focusNode->left);
        PreOrderTransversal(focusNode->right);
    }
    
}
void InOrderTransversal(struct node* focusNode)
{
    if (focusNode != NULL)
    {
        PreOrderTransversal(focusNode->left);
        printf("%d -> ", focusNode->data);
        PreOrderTransversal(focusNode->right);
    }
    
}
void PostOrderTransversal(struct node* focusNode)
{
    if (focusNode != NULL)
    {
        PreOrderTransversal(focusNode->left);
        PreOrderTransversal(focusNode->right);
        printf("%d -> ", focusNode->data);
    }
    
}