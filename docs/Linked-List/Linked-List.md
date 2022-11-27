#Linked List 🖇️

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.

## Types of Linked List

- Singly Linked List
- Doubly Linked List
- Circular Linked List

## Singly Linked List

C program to create a singly linked list.

```c
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


struct Node* search(struct Node *head, int x)
{
    struct Node *current = head; // Initialize current
    while (current != NULL)
    {
        if (current->data == x)
            return current;
        current = current->next;
    }
    printf("\nElement not found");
    return NULL;
}

struct Node *searchSorted(struct Node *head, int x)
{
    struct Node *current = head; // Initialize current
    while (current != NULL)
    {
        if (current->data == x)
            return current;

        else if(current->data > x)
        {
            printf("\nElement not found");
            return NULL;
        }
        current = current->next;
    }
    printf("\nElement not found");
    return NULL;
}

//count the number of nodes in the linked list
int count(struct Node *head)
{
    struct Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

//insert a node at the beginning of the linked list
struct Node * insertAtBeginning(struct Node *head, int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;

    return head;
}

//insert a node at the end of the linked list
struct Node * insertAtEnd(struct Node *head, int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *current = head;
    temp->data = x;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }

    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    return head;
}

//insert a node at a given position in the linked list
struct Node * insertAtPosition(struct Node *head, int x, int pos)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *current = head;
    temp->data = x;
    temp->next = NULL;

    if (pos == 1)
    {
        temp->next = head;
        head = temp;
        return head;
    }

    for (int i = 1; i < pos - 1; i++)
    {
        current = current->next;
    }
    temp->next = current->next;
    current->next = temp;
    return head;
}

// insert node after a given node
struct Node * insertAfterNode(struct Node *head, int x, int pos)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *current = head;
    temp->data = x;
    temp->next = NULL;

    while (current->data != pos)
    {
        current = current->next;
    }
    temp->next = current->next;
    current->next = temp;
    return head;
}

//delete a node at the beginning of the linked list
struct Node * deleteAtBeginning(struct Node *head)
{
    struct Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

//delete a node at the end of the linked list
struct Node * deleteAtEnd(struct Node *head)
{
    struct Node *current = head;
    struct Node *prev = NULL;
    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    prev->next = NULL;
    free(current);
    return head;
}

//delete a node at a given position in the linked list
struct Node * deleteAtPosition(struct Node *head, int pos)
{
    struct Node *current = head;
    struct Node *prev = NULL;
    for (int i = 1; i < pos; i++)
    {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    free(current);
    return head;
}

//delete a node with a given key
struct Node * deleteByKey(struct Node *head, int key)
{
    struct Node *current = head;
    struct Node *prev = NULL;
    while (current->data != key)
    {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    free(current);
    return head;
}

// sort the linked list
struct Node * sort(struct Node *head)
{
    struct Node *current = head;
    struct Node *index = NULL;
    int temp;

    if (head == NULL)
    {
        return head;
    }
    else
    {
        while (current != NULL)
        {
            index = current->next;

            while (index != NULL)
            {
                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
    return head;
}

// Driver's code
int main()
{
    struct Node *head = NULL;
    struct Node *tmp = NULL, *last = NULL, *p_next = NULL, *lptr = NULL;
    int n, temp, swapped;
    char ch;

    do
    {
        tmp = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &n);

        for (p_next = head; p_next != NULL; last = p_next, p_next = p_next->next)
            ;

        if (last == NULL)
            head = tmp;
        else
            last->next = tmp;

        tmp->data = n; // assign data to third node
        tmp->next = NULL;

        printf("Do you want to enter data again? [y/n] ");
        scanf(" %c", &ch);
    } while (ch == 'y');

    printf("Enter which operation you want to perform:\n\n1. Traverse \n2. Search \n3. Search in Sorted LinkedList \n4. Count Nodes \n5. Insert at Beginning \n6. Insert at End\n7. Insert at Position \n8. Insert after a given node \n9. Delete at Beginning \n10. Delete at End \n11. Delete at Position \n12. Delete by Key \n13. Sort \n14. Exit\n");
    scanf("%d", &temp);

    switch (temp)
    {

    case 1:
        printf("Your LL is: ");
        for (p_next = head; p_next != NULL; p_next = p_next->next)
        {
            printf("%d ", p_next->data);
        }
        break;

    case 2:
        printf("Enter the element to be searched: ");
        scanf("%d", &n);
        if(search(head, n)!= NULL)
        printf("\n%d is present in the list", n);
        break;

    case 3:
        printf("Enter the element to be searched: ");
        scanf("%d", &n);
        if( searchSorted(head, n)!= NULL)
        printf("\n%d is present in the list", head->data);
        break;

    case 4:
        printf("Number of nodes in the list: %d", count(head));
        break;    

    case 5:
        printf("Enter the element to be inserted: ");
        scanf("%d", &n);
        head = insertAtBeginning(head, n);
        printf("Your LL is: ");
        for (p_next = head; p_next != NULL; p_next = p_next->next)
        {
            printf("%d ", p_next->data);
        }
        break;

    case 6:
        printf("Enter the element to be inserted: ");
        scanf("%d", &n);
        head = insertAtEnd(head, n);
        printf("Your LL is: ");
        for (p_next = head; p_next != NULL; p_next = p_next->next)
        {
            printf("%d ", p_next->data);
        }
        break;

    case 7:
        printf("Enter the element to be inserted: ");
        scanf("%d", &n);
        printf("Enter the position: ");
        scanf("%d", &temp);
        head = insertAtPosition(head, n, temp);
        printf("Your LL is: ");
        for (p_next = head; p_next != NULL; p_next = p_next->next)
        {
            printf("%d ", p_next->data);
        }
        break;

    case 8:
        printf("Enter the element to be inserted: ");
        scanf("%d", &n);
        printf("Enter the position: ");
        scanf("%d", &temp);
        head = insertAfterNode(head, n, temp);
        printf("Your LL is: ");
        for (p_next = head; p_next != NULL; p_next = p_next->next)
        {
            printf("%d ", p_next->data);
        }
        break;

    case 9:
        head = deleteAtBeginning(head);
        printf("Your LL is: ");
        for (p_next = head; p_next != NULL; p_next = p_next->next)
        {
            printf("%d ", p_next->data);
        }
        break;
    
    case 10:
        head = deleteAtEnd(head);
        printf("Your LL is: ");
        for (p_next = head; p_next != NULL; p_next = p_next->next)
        {
            printf("%d ", p_next->data);
        }
        break;

    case 11:
        printf("Enter the position: ");
        scanf("%d", &temp);
        head = deleteAtPosition(head, temp);
        printf("Your LL is: ");
        for (p_next = head; p_next != NULL; p_next = p_next->next)
        {
            printf("%d ", p_next->data);
        }
        break;
    
    case 12:
        printf("Enter the element to be deleted: ");
        scanf("%d", &n);
        head = deleteByKey(head, n);
        printf("Your LL is: ");
        for (p_next = head; p_next != NULL; p_next = p_next->next)
        {
            printf("%d ", p_next->data);
        }
        break;
    
    case 13:
        head = sort(head);
        printf("Your LL is: ");
        for (p_next = head; p_next != NULL; p_next = p_next->next)
        {
            printf("%d ", p_next->data);
        }
        break;

    case 14:
        exit(0);
        break;

    default:
        printf("Invalid Input");
        break;
    }

    // deallocating memory
    for (p_next = head; p_next != NULL; p_next = tmp)
    {
        tmp = p_next->next;
        free(p_next);
    }

    return 0;
}
```

```

/* Output

Enter data: 7
Do you want to enter data again? [y/n] y
Enter data: 4
Do you want to enter data again? [y/n] y
Enter data: 1
Do you want to enter data again? [y/n] y
Enter data: 4
Do you want to enter data again? [y/n] y
Enter data: 8
Do you want to enter data again? [y/n] n
Enter which operation you want to perform:

1. Traverse 
2. Search 
3. Search in Sorted LinkedList 
4. Count Nodes 
5. Insert at Beginning 
6. Insert at End
7. Insert at Position 
8. Insert after a given node 
9. Delete at Beginning 
10. Delete at End 
11. Delete at Position 
12. Delete by Key 
13. Sort
14. Exit
7

Enter the element to be inserted: 5
Enter the position: 2
Your LL is: 7 5 4 1 4 8 */
```