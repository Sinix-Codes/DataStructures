# **Queue** 🧍‍♂️🧍‍♀️🧍‍♂️🧍‍♀️🧍‍♀️🧍‍♂️

## **Introduction**

Queue is a data structure that follows the FIFO (First In First Out) principle. It is a linear data structure that stores items in a sequential manner. The addition of new elements in a queue is at the rear end and the removal of existing elements takes place from the front end of the queue.

## **Basic Operations**

- Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.
- Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.

## **Applications**

- CPU Scheduling
- Disk Scheduling
- Handling of interrupts in real-time systems
- Call Center phone systems use Queues to hold people calling them in an order, until a service representative is free.

## **Implementation**

### **Array Implementation**

=== "C"

```c

// Program for queue operations using array

    #include <stdio.h>
    #include <stdlib.h>

    #define MAX 5 //size of queue

    int queue[MAX];

    int front = -1;

    int rear = -1;

    void insert()

    {

        int item;

    if (front == 0 && rear == MAX - 1)

        printf("\n Queue Overflow "); // Overflow

    else
    {
        if (front == -1 && rear == -1)
        {
            printf("Queue is empty, Inserting first element");
            front = front+1;
            rear = rear+1;
        }
        else if(rear == MAX-1)
        {
            rear = 0;
        }
        else
        {
            rear = rear+1;
        }


        printf("\n Input the element for insertion in queue : "); // Insertion

        scanf("%d", &item);

        queue[rear] = item;
        }

    }

    void remove()
    {
    if (front == -1 || rear == -1)
    {
    printf("\n Queue Underflow "); // Underflow
    return;
    }
    else if(front == rear)
    {
    printf("\n Deleted element is %d", queue[front]);
    front = -1;
    rear = -1;
    }
    else if(front == MAX-1)
    {
    printf("\n Deleted element is %d", queue[front]);
    front = 0;
    }
    else
    {
    printf("\n Deleted element is %d", queue[front]);
    front = front+1;
    }
    }

    void display()
    {
    int i;
    if (front == -1 && rear == -1)
    {
    printf("\n Queue is empty ");
    }
    else
    {
    printf("\n Queue is : ");
    if(front <= rear)
    {
    for (i = front; i <= rear; i++)
    {
    printf("%d ", queue[i]);
    }
    }
    else
    {
    for(i=front;i<MAX;i++)
    {
    printf("%d ",queue[i]);
    }
    for(i=0;i<=rear;i++)
    {
    printf("%d ",queue[i]);
    }
    }
    }
    }

    int main()
    {
    int choice;
    while (1)
    {
    printf("\n1. Insert element to queue "); // Insertion
    printf("\n2. Delete element from queue "); // Deletion
    printf("\n3. Display all elements of queue "); // Display
    printf("\n4. Quit "); // Exit
    printf("\nEnter your choice : "); // Choice
    scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            remove();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);

        default:
            printf("\nWrong choice "); // Wrong choice
            break;
        }
    }
    return 0;

    } // End of main

```

```

     OUTPUT


1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 1

Input the element for insertion in queue : 4

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 1

Input the element for insertion in queue : 9

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 1

Input the element for insertion in queue : 4

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 3

Queue is : 4 9 4

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 1

Input the element for insertion in queue : 7

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 1

Input the element for insertion in queue : 5

1.  Insert element to queue
2.  Delete element from queue
3.  Display all elements of queue
4.  Quit
    Enter your choice : 1

        Input the element for insertion in queue : 6

        Queue Overflow

5.  Insert element to queue
6.  Delete element from queue
7.  Display all elements of queue
8.  Quit
    Enter your choice : 2

Deleted element is 4

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 3

Queue is : 9 4 7 5

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 2

Deleted element is 9

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 2

Deleted element is 4

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 2

Deleted element is 7

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 2

Deleted element is 5

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 2

Queue Underflow

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 3

Queue is empty

1. Insert element to queue
2. Delete element from queue
3. Display all elements of queue
4. Quit
   Enter your choice : 4

```

### **Linked List Implementation**

=== "C"

    ```c
    #include <stdio.h>
    #include <stdlib.h>

    struct Node
    {
        int data;
        struct Node *next;
    } *front = NULL, *rear = NULL;

    void enqueue(int data)
    {
        struct Node *t;
        t = (struct Node *)malloc(sizeof(struct Node));
        if (t == NULL)
        {
            printf("Queue is full\n");
        }
        else
        {
            t->data = data;
            t->next = NULL;
            if (front == NULL)
            {
                front = rear = t;
            }
            else
            {
                rear->next = t;
                rear = t;
            }
        }
    }

    int dequeue()
    {
        int x = -1;
        struct Node *t;
        if (front == NULL)
        {
            printf("Queue is empty\n");
        }
        else
        {
            x = front->data;
            t = front;
            front = front->next;
            free(t);
        }
        return x;
    }

    void display()
    {
        struct Node *p = front;
        while (p)
        {
            printf("%d ", p->data);
            p = p->next;
        }
        printf("\n");
    }

    int main()
    {
        enqueue(1);
        enqueue(2);
        enqueue(3);
        enqueue(4);
        enqueue(5);
        enqueue(6);
        display();
        dequeue();
        dequeue();
        display();
        enqueue(6);
        enqueue(7);
        display();
        return 0;
    }
    ```

### **Time Complexity**

| Operation | Time Complexity |
| --------- | --------------- |
| Insertion | O(1)            |
| Deletion  | O(1)            |
| Search    | O(n)            |
| Access    | O(n)            |

## **Problems**

- [Leetcode - 232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)
- [Leetcode - 622. Design Circular Queue](https://leetcode.com/problems/design-circular-queue/)
- [Leetcode - 933. Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/)
- [Leetcode - 346. Moving Average from Data Stream](https://leetcode.com/problems/moving-average-from-data-stream/)
- [Leetcode - 225. Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)
