# Sorting techniques of arrays :recycle:

## **Bubble sort** :balloon:

Bubble sort is a simple sorting algorithm. This sorting algorithm is comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order. This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2) where n is the number of items.

### *Pseudocode* :page_facing_up:

```c

procedure bubbleSort( A : list of sortable items )
    n = length(A)
    repeat
        swapped = false
        for i = 1 to n-1 inclusive do
            /* if this pair is out of order */
            if A[i-1] > A[i] then
                /* swap them and remember something changed */
                swap( A[i-1], A[i] )
                swapped = true
            end if
        end for
    until not swapped
end procedure

```

=== "C"

    ```c

    #include <stdio.h>
    int main()
    {
        int arr[10], i, j, temp;
        printf("Enter the elements of the array: ");
        for (i = 0; i < 10; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < 10; i++)
        {
            for (j = i + 1; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("The sorted array is: ");
        for (i = 0; i < 10; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }

    ```

=== "C++"

    ```c++

    #include <iostream>
    using namespace std;
    int main()
    {
        int arr[10], i, j, temp;
        cout<<"Enter the elements of the array: ";
        for (i = 0; i < 10; i++)
        {
            cin>>arr[i];
        }
        for (i = 0; i < 10; i++)
        {
            for (j = i + 1; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout<<"The sorted array is: ";
        for (i = 0; i < 10; i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }

    ```
=== "Python"

    ```python

    arr = []
    print("Enter the elements of the array: ")
    for i in range(10):
        arr.append(int(input()))
    for i in range(10):
        for j in range(i + 1, 10):
            if arr[i] > arr[j]:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    print("The sorted array is: ")
    for i in range(10):
        print(arr[i], end=" ")

    ```
---

## **Selection sort** :microscope:

Selection sort is a simple sorting algorithm. This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list.

### *Pseudocode*  :page_facing_up:

```c

procedure selectionSort( A : list of sortable items )
    n = length(A)
    for i = 1 to n-1 inclusive do
        /* set current element as minimum*/
        min = i    
        /* check the element to be minimum */         
        for j = i+1 to n inclusive do
            if A[j] < A[min] then
                min = j;
            end if
        end for
        /* swap the minimum element with the current element*/  
        if indexMin != i  then
            swap A[min] and A[i]
        end if
    end for
end procedure

```

=== "C"
    ```c
    #include <stdio.h>
    int main()
    {
        int arr[10], i, j, temp;
        printf("Enter the elements of the array: ");
        for (i = 0; i < 10; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < 10; i++)
        {
            for (j = i + 1; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("The sorted array is: ");
        for (i = 0; i < 10; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }

    ```

=== "C++"
    ```c++
    #include <iostream>
    using namespace std;

    int main()
    {
        int arr[10], i, j, temp;
        cout<<"Enter the elements of the array: ";
        for (i = 0; i < 10; i++)
        {
            cin>>arr[i];
        }
        for (i = 0; i < 10; i++)
        {
            for (j = i + 1; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout<<"The sorted array is: ";
        for (i = 0; i < 10; i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }

    ```
=== "Python"
    ```python
    arr = []
    print("Enter the elements of the array: ")
    for i in range(10):
        arr.append(int(input()))
    for i in range(10):
        for j in range(i + 1, 10):
            if arr[i] > arr[j]:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    print("The sorted array is: ")
    for i in range(10):
        print(arr[i], end=" ")

    ```
---

## **Insertion sort** :put_litter_in_its_place:

Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

### *Pseudocode* :page_facing_up:

```c

procedure insertionSort( A : list of sortable items )
    n = length(A)
    for i = 1 to n-1 inclusive do
        /* select value to be inserted */
        value = A[i]
        /* select hole position where number is to be inserted */
        hole = i
        /*locate hole position for the element to be inserted */
        while hole > 0 and A[hole-1] > value do
            A[hole] = A[hole-1]
            hole = hole -1
        end while
        /* insert the number at hole position */
        A[hole] = value
    end for
end procedure

```

=== "C"
    ```c
    #include <stdio.h>
    int main()
    {
        int arr[10], i, j, temp;
        printf("Enter the elements of the array: ");
        for (i = 0; i < 10; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < 10; i++)
        {
            for (j = i + 1; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("The sorted array is: ");
        for (i = 0; i < 10; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }

    ```
=== "C++"
    ```c++
    #include <iostream>
    using namespace std;

    int main()
    {
        int arr[10], i, j, temp;
        cout<<"Enter the elements of the array: ";
        for (i = 0; i < 10; i++)
        {
            cin>>arr[i];
        }
        for (i = 0; i < 10; i++)
        {
            for (j = i + 1; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout<<"The sorted array is: ";
        for (i = 0; i < 10; i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }

    ```
=== "Python"
    ```python
    arr = []
    print("Enter the elements of the array: ")
    for i in range(10):
        arr.append(int(input()))
    for i in range(10):
        for j in range(i + 1, 10):
            if arr[i] > arr[j]:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    print("The sorted array is: ")
    for i in range(10):
        print(arr[i], end=" ")

    ```
