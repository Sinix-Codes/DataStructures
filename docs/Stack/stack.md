# Stack 📚

A stack is a data structure that follows the **LIFO (Last In First Out)** principle. It is a linear data structure that stores items in a similar fashion to a pile of objects. A real-world example of a stack is a stack of plates. The plate that is at the top of the pile is the first one to be removed, i.e., the plate which has been placed at the bottommost position remains in the stack for the longest period of time. The insert and delete operations are often called **push** and **pop**.

## **Applications of Stack** :information_source:

-   **Balancing of symbols** :heavy_check_mark:
-   **Infix to Postfix / Prefix conversion** :heavy_check_mark:
-   **Redo-undo features at many places like editors, photoshop.** :heavy_check_mark:
-   **Forward and backward feature in web browsers** :heavy_check_mark:
-   **Used in many algorithms like Tower of Hanoi, tree traversals, stock span problem, histogram problem.** :heavy_check_mark:

## **Implementation of Stack** :information_source:

-   **Using Array** :heavy_check_mark:
-   **Using Linked List** :heavy_check_mark:

## **Operations on Stack** :information_source:

-   **Push** :heavy_check_mark:
    -  Inserting an element into the stack is called push.
-   **Pop** :heavy_check_mark:
    -  Removing an element from the stack is called pop.

## **Time Complexity** :information_source:

-   **Push** :heavy_check_mark:
    -  O(1)
-   **Pop** :heavy_check_mark:
    -  O(1)

## **Space Complexity** :information_source:

-   **Push** :heavy_check_mark:
    -  O(1)
-   **Pop** :heavy_check_mark:
    -  O(1)

## **Code** :information_source:

**Using Array** :heavy_check_mark:
    
=== "C"

    ```c
        #include <stdio.h>
        #include <stdlib.h>

        int *stack,n,size,top=-1,i,ele,ind;

        void push();
        void pop();
        void peek();

        int main()
        {
            printf("\n\tStack Representation Using Array\n\t--------------------------------------");
            printf("\nEnter the size of stack : ");
            scanf("%d",&size);

            stack = (int *)malloc(size * sizeof(int));

            do
            {
                printf("\nEnter which operation you want to perform :\n1 : push()\n2 : pop()\n3 : peek()\n4 : Stop");
                scanf("%d",&i);
                switch (i)
                {
                case 1:
                    push();
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    peek();
                    break;
                case 4:
                    break;
                default:
                    printf("Enter valid input : 1/2/3/4");
                    break;
                }
            } while (i!=4);
            
            return 0;
        }

        void push()
        {
            if(top>=size-1)
            {
                printf("\nStack Overflow!");
            }
            else
            {
                printf("\nEnter element to push into Stack: ");
                scanf("%d",&ele);
                top++;
                stack[top]=ele;
            }
        }

        void pop()
        {
            if(top<=-1)
            {
                printf("\nStack Underflow!");
            }
            else
            {
                printf("\n%d is poped from stack",stack[top]);
                top--;
            }
        }

        void peek()
        {
            if (top>=0)
            {
                for ( i = top; i >= 0; i--)
                    printf("\n%d",stack[i]);
            
                printf("\nEnter next operation : ");
            }
            else
            {
                printf("\nStack is Empty!");
            }
        }
    ```

=== "C++"
    
    ```cpp
        #include <iostream>
        #include <stdlib.h>

        #define MAX 1000

        int stack[MAX];
        int top = -1;

        void push(int data)
        {
            if (top == MAX - 1)
            {
                std::cout << "Stack Overflow";
            }
            else
            {
                top++;
                stack[top] = data;
            }
        }

        void pop()
        {
            if (top == -1)
            {
                std::cout << "Stack Underflow";
            }
            else
            {
                top--;
            }
        }

        int peek()
        {
            if (top == -1)
            {
                std::cout << "Stack Underflow";
                return -1;
            }
            else
            {
                return stack[top];
            }
        }

        void display()
        {
            if (top == -1)
            {
                std::cout << "Stack Underflow";
            }
            else
            {
                for (int i = top; i >= 0; i--)
                {
                    std::cout << stack[i] << " ";
                }
            }
        }

        int main()
        {
            int choice, data;
            while (1)
            {
                std::cout << "\n1. Push";
                std::cout << "\n2. Pop";
                std::cout << "\n3. Peek";
                std::cout << "\n4. Display";
                std::cout << "\n5. Exit";
                std::cout << "\nEnter your choice: ";
                std::cin >> choice;
                switch (choice)
                {
                case 1:
                    std::cout << "Enter data: ";
                    std::cin >> data;
                    push(data);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    std::cout << "Top element is " << peek();
                    break;
                case 4:
                    display();
                    break;
                case 5:
                    exit(0);
                default:
                    std::cout << "Invalid choice";
                }
            }
            return 0;
        }
    ```

=== "Python"

    ```python
        stack = []

        def push(data):
            stack.append(data)

        def pop():
            if len(stack) == 0:
                print("Stack Underflow")
            else:
                stack.pop()
        
        def peek():
            if len(stack) == 0:
                print("Stack Underflow")
            else:
                return stack[-1]

        def display():
            if len(stack) == 0:
                print("Stack Underflow")
            else:
                for i in range(len(stack)-1, -1, -1):
                    print(stack[i], end=" ")

        while True:
            print("\n1. Push")
            print("2. Pop")
            print("3. Peek")
            print("4. Display")
            print("5. Exit")
            choice = int(input("Enter your choice: "))
            if choice == 1:
                data = int(input("Enter data: "))
                push(data)
            elif choice == 2:
                pop()
            elif choice == 3:
                print("Top element is", peek())
            elif choice == 4:
                display()
            elif choice == 5:
                break
            else:
                print("Invalid choice")
    ```
=== "Java"

    ```java
        import java.util.Scanner;

        public class Stack {
            static int MAX = 1000;
            static int top = -1;
            static int stack[] = new int[MAX];

            static void push(int data) {
                if (top == MAX - 1) {
                    System.out.println("Stack Overflow");
                } else {
                    top++;
                    stack[top] = data;
                }
            }

            static void pop() {
                if (top == -1) {
                    System.out.println("Stack Underflow");
                } else {
                    top--;
                }
            }

            static int peek() {
                if (top == -1) {
                    System.out.println("Stack Underflow");
                    return -1;
                } else {
                    return stack[top];
                }
            }

            static void display() {
                if (top == -1) {
                    System.out.println("Stack Underflow");
                } else {
                    for (int i = top; i >= 0; i--) {
                        System.out.print(stack[i] + " ");
                    }
                }
            }

            public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                int choice, data;
                while (true) {
                    System.out.println("\n1. Push");
                    System.out.println("2. Pop");
                    System.out.println("3. Peek");
                    System.out.println("4. Display");
                    System.out.println("5. Exit");
                    System.out.print("Enter your choice: ");
                    choice = sc.nextInt();
                    switch (choice) {
                        case 1:
                            System.out.print("Enter data: ");
                            data = sc.nextInt();
                            push(data);
                            break;
                        case 2:
                            pop();
                            break;
                        case 3:
                            System.out.println("Top element is " + peek());
                            break;
                        case 4:
                            display();
                            break;
                        case 5:
                            System.exit(0);
                        default:
                            System.out.println("Invalid choice");
                    }
                }
            }
        }
    ```


