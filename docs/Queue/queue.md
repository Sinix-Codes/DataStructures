# Queue 🧍‍♂️🧍‍♀️🧍‍♂️🧍‍♀️🧍‍♀️🧍‍♂️

## Introduction

Queue is a data structure that follows the FIFO (First In First Out) principle. It is a linear data structure that stores items in a sequential manner. The addition of new elements in a queue is at the rear end and the removal of existing elements takes place from the front end of the queue.

## Basic Operations

- Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.
- Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.

## Applications

- CPU Scheduling
- Disk Scheduling
- Handling of interrupts in real-time systems
- Call Center phone systems use Queues to hold people calling them in an order, until a service representative is free.

## Implementation

### Array Implementation

=== "C"

    ```c
    #include <stdio.h>
    #include <stdlib.h>

    #define MAX 5

    int queue[MAX];

    int front = -1;
    int rear = -1;

    void enqueue(int data)
    {
        if (rear == MAX - 1)
        {
            printf("Queue is full\n");
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            queue[rear] = data;
        }
        else
        {
            rear++;
            queue[rear] = data;
        }
    }

    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            printf("Queue is empty\n");
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }

    void display()
    {
        if (front == -1 && rear == -1)
        {
            printf("Queue is empty\n");
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                printf("%d ", queue[i]);
            }
            printf("\n");
        }
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

=== "C++"

    ```cpp

    #include <iostream>
    #include <vector>

    using namespace std;

    class Queue
    {
    private:
        vector<int> v;
        int front;
        int rear;

    public:
        Queue()
        {
            front = -1;
            rear = -1;
        }

        void enqueue(int data)
        {
            if (rear == v.size() - 1)
            {
                cout << "Queue is full" << endl;
            }
            else if (front == -1 && rear == -1)
            {
                front = rear = 0;
                v.push_back(data);
            }
            else
            {
                rear++;
                v.push_back(data);
            }
        }

        void dequeue()
        {
            if (front == -1 && rear == -1)
            {
                cout << "Queue is empty" << endl;
            }
            else if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front++;
            }
        }

        void display()
        {
            if (front == -1 && rear == -1)
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                for (int i = front; i <= rear; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
            }
        }
    };

    int main()
    {
        Queue q;
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);
        q.enqueue(5);
        q.enqueue(6);
        q.display();
        q.dequeue();
        q.dequeue();
        q.display();
        q.enqueue(6);
        q.enqueue(7);
        q.display();
        return 0;
    }
    ```

### Linked List Implementation

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

### Time Complexity

| Operation | Time Complexity |
| --------- | --------------- |
| Insertion | O(1)            |
| Deletion  | O(1)            |
| Search    | O(n)            |
| Access    | O(n)            |

## Problems

- [Leetcode - 232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)
- [Leetcode - 622. Design Circular Queue](https://leetcode.com/problems/design-circular-queue/)
- [Leetcode - 933. Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/)
- [Leetcode - 346. Moving Average from Data Stream](https://leetcode.com/problems/moving-average-from-data-stream/)
- [Leetcode - 225. Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)

