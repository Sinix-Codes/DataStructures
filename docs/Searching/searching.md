# Searching in One dimention array :eyes:

This algorithm is used to search an element in a one dimention array.

=== "C"
    ```c
        #include <stdio.h>
        int main()
        {
            int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            int i, n, flag = 0;
            printf("Enter the number to be searched: ");
            scanf("%d", &n);
            for (i = 0; i < 10; i++)
            {
                if (arr[i] == n)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("The number is found at position %d", i + 1);
            }
            else
            {
                printf("The number is not found");
            }
            return 0;
        }
    ```
=== "C++"
    ```c++
        #include <stdio.h>
        int main()
        {
            int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            int i, n, flag = 0;
            cout<<"Enter the number to be searched: ";
            cin>>n;
            for (i = 0; i < 10; i++)
            {
                if (arr[i] == n)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout<<"The number is found at position <<   i + 1";
            }
            else
            {
                cout<<"The number is not found";
            }
            return 0;
        }
    ```

=== "Python"
    ```python
        arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
        n = int(input("Enter the number to be searched: "))
        flag = 0
        for i in range(10):
            if arr[i] == n:
                flag = 1
                break
        if flag == 1:
            print("The number is found at position ", i + 1)
        else:
            print("The number is not found")
    ```

## Output

```bash
Enter the number to be searched: 5
The number is found at position 5
```

## Time Complexity :watch:

The time complexity of this algorithm is O(n).