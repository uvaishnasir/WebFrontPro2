#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left, *right;
} Node;

Node *createNode(int data) // creating node.
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inOrder(struct node *root) // inorder traversal.
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

Node *inOrederPredecessor(Node *root)
{
    root = root->left;          // root move to left subtree.
    while (root->right != NULL) // Inorder predecessor is the rightmost child of the left subtree or .
    {
        root = root->right;
    }
    return root;
}

Node *delete (Node *root, int value)
{
    Node *iPre;
    if (root == NULL) // if EMPTY BST passed.
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL) // if only the root node in BST...
    {
        free(root);
        return NULL;
    }
    // now search for the node to be deleted...
    if (value < root->data) // if value less than root then shift towards left subtree.
    {
        root->left = delete (root->left, value);
    }
    else if (value > root->data) // if value greater than root then shift towards right subtree.
    {
        root->right = delete (root->right, value);
    }
    else // deletion strategy. when node found.  i.e.  value==root->data.
    {
        iPre = inOrederPredecessor(root);
        root->data = iPre->data;
        root->left = delete (root->left, iPre->data);
    }
    return root;
}

void main()
{
    // Constructing the root node-Using Function (Recommended)
    Node *root = createNode(5);
    Node *p1 = createNode(3);
    Node *p2 = createNode(7);
    Node *p3 = createNode(2);
    Node *p4 = createNode(4);
    // Linking the root node with left and right children to make a BST.
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    // Finally The tree looks like this:
    //      5(root)
    //     / \
    //(p1)3   7(p2)
    //   / \
    //  2   4
    inOrder(root);
    printf("\n");
    delete (root, 5); // root deleted & change by 4.
    inOrder(root);
    printf("\nNow root->data is %d", root->data);

    printf("\n");
    delete (root, 2);
    inOrder(root);
}