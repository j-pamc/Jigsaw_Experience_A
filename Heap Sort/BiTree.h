#ifndef BITREE_H
#define BITREE_H
// BinaryTree implementation

struct node
{
    // Tipo de dados
    /*
        Neste caso irá se usar o tipo inteiro
        Mas pode se utilizar qualquer tipo
        ORIGINAL : void *data;
    */

    int data;

    // Ramificações
    struct node *left, *right;
};

struct BinaryTree
{
    // A raiz da árvore
    struct node *root;
};

struct node *newNode(int);

struct BinaryTree *Init();

struct node *AddNodeRecursive(struct node *, int);

void AddNode(struct BinaryTree *, int);

void PreOrderTransversal(struct node *);
void InOrderTransversal(struct node *);
void PostOrderTransversal(struct node *);
#endif
// Implemented by Ivandro Neto