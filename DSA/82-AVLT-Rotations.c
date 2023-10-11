#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int key;
    struct Node *left, *right;
    int height;
} node;

node *creatNode(int key)
{
    node *new = (node *)malloc(sizeof(node));
    new->left = new->right = NULL;
    new->key = key;
    new->height = 1;
    return new;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int getHeight(node *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}

int getBalanceFactor(node *n)
{
    if (n == NULL)
        return 0;
    return getHeight(n->left) - getHeight(n->right);
}

node *rightRotate(node *y)
{
    node *x = y->left;
    node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return x;
}
node *leftRotate(node *x)
{
    node *y = x->right;
    node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return y;
}

node *insert(node *n, int key)
{
    if (n == NULL)
        return creatNode(key);
    if (key < n->key)
        n->left = insert(n->left, key);
    else if (key > n->key)
        n->right = insert(n->right, key);

    n->height = 1 + max(getHeight(n->left), getHeight(n->right));

    int bf = getBalanceFactor(n);

    // left left case
    if (bf > 1 && key < n->left->key)
        return rightRotate(n);

    // right right case
    if (bf < -1 && key > n->right->key)
        return leftRotate(n);
    // left right case
    if (bf > 1 && key > n->left->key)
    {
        n->left = leftRotate(n->left);
        return rightRotate(n);
    }
    // right left case
    if (bf < -1 && key < n->right->key)
    {
        n->right = rightRotate(n->right);
        return leftRotate(n);
    }
    
    return n;
}

void inOrder(node *root) // inorder traversal.
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->key);
        inOrder(root->right);
    }
}

void preOrder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void main()
{
    node *root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);

    preOrder(root);

    printf("\nRoot is %d\n", root->key);

    // inOrder(root);
}