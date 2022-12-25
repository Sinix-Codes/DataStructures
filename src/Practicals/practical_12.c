#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *root = NULL;

void insert(int data)
{
    struct node *newnode= (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    if (root == NULL)
    {
        root = newnode;
    }
    else
    {
        struct node *temp = root;
        while (1)
        {
            if (data < temp->data)
            {
                if (temp->left == NULL)
                {
                    temp->left = newnode;
                    break;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else
            {
                if (temp->right == NULL)
                {
                    temp->right = newnode;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
}

void preorder(struct node *temp)
{
    if (temp != NULL)
    {
        printf(" %d", temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void inorder(struct node *temp)
{
    if (temp != NULL)
    {
        inorder(temp->left);
        printf(" %d", temp->data);
        inorder(temp->right);
    }
}
void postorder(struct node *temp)
{
    if (temp != NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf(" %d", temp->data);
    }
}
int main()
{
    int num, data;
    printf("\nEnter number of nodes : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("\nEnter data :");
        scanf("%d", &data);
        insert(data);
    }

    printf("\nPreorder : ");
    preorder(root);
    printf("\nInorder : ");
    inorder(root);
    printf("\nPostorder : ");
    postorder(root);
    return 0;
}