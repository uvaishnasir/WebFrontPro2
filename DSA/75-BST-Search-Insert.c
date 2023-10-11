#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;

Node *createNode(int data) // creating node.
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

Node *search(Node *root, int key) // recursive search.
{
    if (root == NULL)
        return NULL;
    if (root->data == key)
        return root;
    else if (root->data > key)
        return search(root->left, key);
    else
        return search(root->right, key);
}

Node *searchIter(Node *root, int key) // iterative search.
{
    if (root == NULL)
        return NULL;
    while (root != NULL)
    {
        if (root->data == key)
            return root;
        else if (root->data > key)
            root = root->left;
        else
            root = root->right;
    }
}

void insert(Node *root, int key) // inserting in BST.
{
    Node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
        {
            printf("Can't insert as duplicate founded...!\n");
            return;
        }
        else if (root->data > key)
            root = root->left;
        else
            root = root->right;
    }
    // PREV node is now parent of inserting node.
    Node *new = createNode(key);
    if (new->data < prev->data)
        prev->left = new;
    else
        prev->right = new;
    printf("Inserted: %d\n", new->data);
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void main()
{
    // Constructing the root node-Using Function (Recommended)
    Node *p = createNode(5);
    Node *p1 = createNode(3);
    Node *p2 = createNode(7);
    Node *p3 = createNode(2);
    Node *p4 = createNode(4);
    // Linking the root node with left and right children to make a BST.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   7
    //   / \
    //  2   4

    // Node *root = search(p, 1); // you can search any number here.
    Node *root = searchIter(p, 7);
    if (root == NULL)
        printf("Not Found...EXIT\n");
    else
        printf("Founded: %d\n", root->data);

    insert(p, 6);  // 6 will insert left of the node 7.
    insert(p, 10); // 10 will insert right of the node 7.
    inOrder(p);
    printf("\n");

    insert(p, 9);
    insert(p, 1);
    insert(p, 8);

    inOrder(p);
    printf("\n");

}